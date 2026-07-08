using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000358")]
[ComVisible(true)]
public class WellKnownServiceTypeEntry : TypeEntry
{
	[Token(Token = "0x4000EC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type obj_type;

	[Token(Token = "0x4000EC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string obj_uri;

	[Token(Token = "0x4000EC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private WellKnownObjectMode obj_mode;

	[Token(Token = "0x17000351")]
	public WellKnownObjectMode Mode
	{
		[Token(Token = "0x6001CE3")]
		[Address(RVA = "0x4E8B370", Offset = "0x4E8B370", VA = "0x4E8B370")]
		get
		{
			return default(WellKnownObjectMode);
		}
	}

	[Token(Token = "0x17000352")]
	public Type ObjectType
	{
		[Token(Token = "0x6001CE4")]
		[Address(RVA = "0x4E8B380", Offset = "0x4E8B380", VA = "0x4E8B380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000353")]
	public string ObjectUri
	{
		[Token(Token = "0x6001CE5")]
		[Address(RVA = "0x4E8B390", Offset = "0x4E8B390", VA = "0x4E8B390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CE2")]
	[Address(RVA = "0x4E8B230", Offset = "0x4E8B230", VA = "0x4E8B230")]
	public WellKnownServiceTypeEntry(string typeName, string assemblyName, string objectUri, WellKnownObjectMode mode)
	{
	}

	[Token(Token = "0x6001CE6")]
	[Address(RVA = "0x4E8B3A0", Offset = "0x4E8B3A0", VA = "0x4E8B3A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
