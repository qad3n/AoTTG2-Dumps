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
		[Address(RVA = "0x3B70CF0", Offset = "0x3B70CF0", VA = "0x3B70CF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034F")]
	public Type ObjectType
	{
		[Token(Token = "0x6001CDF")]
		[Address(RVA = "0x3B70D00", Offset = "0x3B70D00", VA = "0x3B70D00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000350")]
	public string ObjectUrl
	{
		[Token(Token = "0x6001CE0")]
		[Address(RVA = "0x3B70D10", Offset = "0x3B70D10", VA = "0x3B70D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001CDD")]
	[Address(RVA = "0x3B70BC0", Offset = "0x3B70BC0", VA = "0x3B70BC0")]
	public WellKnownClientTypeEntry(string typeName, string assemblyName, string objectUrl)
	{
	}

	[Token(Token = "0x6001CE1")]
	[Address(RVA = "0x3B70D20", Offset = "0x3B70D20", VA = "0x3B70D20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
