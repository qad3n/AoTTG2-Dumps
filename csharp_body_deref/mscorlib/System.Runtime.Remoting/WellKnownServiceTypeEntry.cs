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

[Token(Token = "0x2000360")]
[ComVisible(true)]
public class WellKnownServiceTypeEntry : TypeEntry
{
	[Token(Token = "0x4000E34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type obj_type;

	[Token(Token = "0x4000E35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string obj_uri;

	[Token(Token = "0x4000E36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private WellKnownObjectMode obj_mode;

	[Token(Token = "0x17000352")]
	public WellKnownObjectMode Mode
	{
		[Token(Token = "0x6001D28")]
		[Address(RVA = "0x5379810", Offset = "0x5378810", VA = "0x5379810")]
		get
		{
			return default(WellKnownObjectMode);
		}
	}

	[Token(Token = "0x17000353")]
	public Type ObjectType
	{
		[Token(Token = "0x6001D29")]
		[Address(RVA = "0x5379820", Offset = "0x5378820", VA = "0x5379820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000354")]
	public string ObjectUri
	{
		[Token(Token = "0x6001D2A")]
		[Address(RVA = "0x5379830", Offset = "0x5378830", VA = "0x5379830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D27")]
	[Address(RVA = "0x53796D0", Offset = "0x53786D0", VA = "0x53796D0")]
	public WellKnownServiceTypeEntry(string typeName, string assemblyName, string objectUri, WellKnownObjectMode mode)
	{
	}

	[Token(Token = "0x6001D2B")]
	[Address(RVA = "0x5379840", Offset = "0x5378840", VA = "0x5379840", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
