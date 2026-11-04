// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.TypeEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x2000383")]
[ComVisible(true)]
public class TypeEntry
{
	[Token(Token = "0x4000EC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string assembly_name;

	[Token(Token = "0x4000ECA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string type_name;

	[Token(Token = "0x1700034D")]
	public string AssemblyName
	{
		[Token(Token = "0x6001D45")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D46")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x1700034E")]
	public string TypeName
	{
		[Token(Token = "0x6001D47")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001D48")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x6001D44")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected TypeEntry()
	{
	}
}
