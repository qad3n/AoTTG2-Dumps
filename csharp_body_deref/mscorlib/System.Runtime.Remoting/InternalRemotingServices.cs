using System.Collections;
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Metadata;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000343")]
[ComVisible(true)]
public class InternalRemotingServices
{
	[Token(Token = "0x4000E79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Hashtable _soapAttributes;

	[Token(Token = "0x6001C31")]
	[Address(RVA = "0x4E7A1B0", Offset = "0x4E7A1B0", VA = "0x4E7A1B0")]
	public static SoapAttribute GetCachedSoapAttribute(object reflectionObject)
	{
		return null;
	}
}
