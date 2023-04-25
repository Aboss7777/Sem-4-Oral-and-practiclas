<?xml version="1.0"?>

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
  <html>
  <body>
    <h2>Student Details</h2>
    <table border="1">
      <tr>
        <th>Name</th>
        <th>Class</th>
        <th>Roll No</th>
      </tr>
      <xsl:for-each select="Student/Details">
        <tr>
          <td><xsl:value-of select="name"/></td>
          <td><xsl:value-of select="class"/></td>
          <td><xsl:value-of select="rollno"/></td>
        </tr>
      </xsl:for-each>
    </table>
  </body>
  </html>
</xsl:template>

</xsl:stylesheet>