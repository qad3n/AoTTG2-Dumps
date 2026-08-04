// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ActivatedClientTypeEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Remoting.Contexts;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200033A")]
[ComVisible(true)]
public class ActivatedClientTypeEntry : TypeEntry
{
	[Token(Token = "0x4000E69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string applicationUrl;

	[Token(Token = "0x4000E6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Type obj_type;

	[Token(Token = "0x17000329")]
	public string ApplicationUrl
	{
		[Token(Token = "0x6001C11")]
		[Address(RVA = "0x3B5F690", Offset = "0x3B5F690", VA = "0x3B5F690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032A")]
	public IContextAttribute[] ContextAttributes
	{
		[Token(Token = "0x6001C12")]
		[Address(RVA = "0x3B5F6A0", Offset = "0x3B5F6A0", VA = "0x3B5F6A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032B")]
	public Type ObjectType
	{
		[Token(Token = "0x6001C13")]
		[Address(RVA = "0x3B5F6B0", Offset = "0x3B5F6B0", VA = "0x3B5F6B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C10")]
	[Address(RVA = "0x3B5F540", Offset = "0x3B5F540", VA = "0x3B5F540")]
	public ActivatedClientTypeEntry(string typeName, string assemblyName, string appUrl)
	{
	}

	[Token(Token = "0x6001C14")]
	[Address(RVA = "0x3B5F6C0", Offset = "0x3B5F6C0", VA = "0x3B5F6C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
