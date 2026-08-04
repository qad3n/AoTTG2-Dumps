// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.WellKnownServiceTypeEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3B70E90", Offset = "0x3B70E90", VA = "0x3B70E90")]
		get
		{
			return default(WellKnownObjectMode);
		}
	}

	[Token(Token = "0x17000352")]
	public Type ObjectType
	{
		[Token(Token = "0x6001CE4")]
		[Address(RVA = "0x3B70EA0", Offset = "0x3B70EA0", VA = "0x3B70EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000353")]
	public string ObjectUri
	{
		[Token(Token = "0x6001CE5")]
		[Address(RVA = "0x3B70EB0", Offset = "0x3B70EB0", VA = "0x3B70EB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CE2")]
	[Address(RVA = "0x3B70D50", Offset = "0x3B70D50", VA = "0x3B70D50")]
	public WellKnownServiceTypeEntry(string typeName, string assemblyName, string objectUri, WellKnownObjectMode mode)
	{
	}

	[Token(Token = "0x6001CE6")]
	[Address(RVA = "0x3B70EC0", Offset = "0x3B70EC0", VA = "0x3B70EC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
