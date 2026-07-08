using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000356")]
[ComVisible(true)]
public class WellKnownClientTypeEntry : TypeEntry
{
	[Token(Token = "0x4000EC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type obj_type;

	[Token(Token = "0x4000EC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string obj_url;

	[Token(Token = "0x4000EC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string app_url;

	[Token(Token = "0x1700034E")]
	public string ApplicationUrl
	{
		[Token(Token = "0x6001CDE")]
		[Address(RVA = "0x4E8B1D0", Offset = "0x4E8B1D0", VA = "0x4E8B1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034F")]
	public Type ObjectType
	{
		[Token(Token = "0x6001CDF")]
		[Address(RVA = "0x4E8B1E0", Offset = "0x4E8B1E0", VA = "0x4E8B1E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000350")]
	public string ObjectUrl
	{
		[Token(Token = "0x6001CE0")]
		[Address(RVA = "0x4E8B1F0", Offset = "0x4E8B1F0", VA = "0x4E8B1F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CDD")]
	[Address(RVA = "0x4E8B0A0", Offset = "0x4E8B0A0", VA = "0x4E8B0A0")]
	public WellKnownClientTypeEntry(string typeName, string assemblyName, string objectUrl)
	{
	}

	[Token(Token = "0x6001CE1")]
	[Address(RVA = "0x4E8B200", Offset = "0x4E8B200", VA = "0x4E8B200", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
