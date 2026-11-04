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

[Token(Token = "0x2000387")]
[ComVisible(true)]
public class WellKnownServiceTypeEntry : TypeEntry
{
	[Token(Token = "0x4000ED4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type obj_type;

	[Token(Token = "0x4000ED5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string obj_uri;

	[Token(Token = "0x4000ED6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private WellKnownObjectMode obj_mode;

	[Token(Token = "0x17000353")]
	public WellKnownObjectMode Mode
	{
		[Token(Token = "0x6001D52")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		get
		{
			return default(WellKnownObjectMode);
		}
	}

	[Token(Token = "0x17000354")]
	public Type ObjectType
	{
		[Token(Token = "0x6001D53")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000355")]
	public string ObjectUri
	{
		[Token(Token = "0x6001D54")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D51")]
	[Address(RVA = "0x1A0B4D0", Offset = "0x1A09AD0", VA = "0x181A0B4D0")]
	public WellKnownServiceTypeEntry(string typeName, string assemblyName, string objectUri, WellKnownObjectMode mode)
	{
	}

	[Token(Token = "0x6001D55")]
	[Address(RVA = "0x1A0B3D0", Offset = "0x1A099D0", VA = "0x181A0B3D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
