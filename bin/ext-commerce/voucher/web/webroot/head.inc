
<!-- Generated by ExtGen v1.1 -->

<%@page import="
   java.util.*,
   javax.naming.*,
   de.hybris.platform.util.*,
   de.hybris.platform.jalo.*,
   de.hybris.platform.core.*,
   de.hybris.platform.persistence.*,
   de.hybris.platform.voucher.jalo.*,
   de.hybris.platform.voucher.constants.*" %>
   
<html>

<%
		//---register voucher extension
		Class.forName( "de.hybris.platform.voucher.jaloimpl.VoucherManagerEJBImpl" );

    // System Creator creates its own jaloSession
    boolean isInSystemCreator = request.getRequestURI().endsWith("createsystem.jsp");

    //open session with WebSessionFunctions or reuse old one
		JaloSession jaloSession = null;

    if ( ! isInSystemCreator )
    {
      try
      {
        jaloSession = WebSessionFunctions.getSession( request );
      }
      catch( JaloSystemNotInitializedException e )
      {
        out.println("<html>");
        out.println("<head> <title>WebModule Generated by ExtGen v1.1 (voucher)</title>");
        out.println("<link rel=\"stylesheet\" type=\"text/css\" media=\"all\" href=\"/admin/styles.css\"></head>");
        out.println("<body>");
        out.println("<h2><font color=\"red\">System not initialized</font></h2>");
        out.println("Please go to this <a href=\"admin/createsystem.jsp\">page</a> for system initialization");
        out.println("</body></html>");
        out.flush();
        return;
      }
    } 
%>

<head>
		<title>WebModule Generated by ExtGen v1.1 (voucher)</title>
      <link rel="stylesheet" type="text/css" media="all" href="/admin/styles.css">
</head>
<body topmargin="30" leftmargin="30">

<img src="/admin/images/hybris_hep_logo.gif"/><br><p>


<%
    response.setHeader("Cache-Control","no-store"); 	//HTTP 1.1
    response.setHeader("Pragma","no-cache"); 			//HTTP 1.0
    response.setDateHeader ("Expires", 0);				 //prevents caching at the proxy server
%>