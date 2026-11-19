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

[Token(Token = "0x200035E")]
[ComVisible(true)]
public class WellKnownClientTypeEntry : TypeEntry
{
	[Token(Token = "0x4000E2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type obj_type;

	[Token(Token = "0x4000E2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private string obj_url;

	[Token(Token = "0x4000E30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string app_url;

	[Token(Token = "0x1700034F")]
	public string ApplicationUrl
	{
		[Token(Token = "0x6001D23")]
		[Address(RVA = "0x5379670", Offset = "0x5378670", VA = "0x5379670")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000350")]
	public Type ObjectType
	{
		[Token(Token = "0x6001D24")]
		[Address(RVA = "0x5379680", Offset = "0x5378680", VA = "0x5379680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000351")]
	public string ObjectUrl
	{
		[Token(Token = "0x6001D25")]
		[Address(RVA = "0x5379690", Offset = "0x5378690", VA = "0x5379690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001D22")]
	[Address(RVA = "0x5379540", Offset = "0x5378540", VA = "0x5379540")]
	public WellKnownClientTypeEntry(string typeName, string assemblyName, string objectUrl)
	{
	}

	[Token(Token = "0x6001D26")]
	[Address(RVA = "0x53796A0", Offset = "0x53786A0", VA = "0x53796A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
