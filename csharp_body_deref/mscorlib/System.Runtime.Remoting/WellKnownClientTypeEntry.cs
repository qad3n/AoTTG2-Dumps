// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.WellKnownClientTypeEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000385")]
[ComVisible(true)]
public class WellKnownClientTypeEntry : TypeEntry
{
	[Token(Token = "0x4000ECE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type obj_type;

	[Token(Token = "0x4000ECF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string obj_url;

	[Token(Token = "0x4000ED0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string app_url;

	[Token(Token = "0x17000350")]
	public string ApplicationUrl
	{
		[Token(Token = "0x6001D4D")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000351")]
	public Type ObjectType
	{
		[Token(Token = "0x6001D4E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000352")]
	public string ObjectUrl
	{
		[Token(Token = "0x6001D4F")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D4C")]
	[Address(RVA = "0x1A0B290", Offset = "0x1A09890", VA = "0x181A0B290")]
	public WellKnownClientTypeEntry(string typeName, string assemblyName, string objectUrl)
	{
	}

	[Token(Token = "0x6001D50")]
	[Address(RVA = "0x1A0B250", Offset = "0x1A09850", VA = "0x181A0B250", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
