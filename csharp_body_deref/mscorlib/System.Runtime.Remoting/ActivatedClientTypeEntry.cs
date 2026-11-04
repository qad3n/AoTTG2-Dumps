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

[Token(Token = "0x2000369")]
[ComVisible(true)]
public class ActivatedClientTypeEntry : TypeEntry
{
	[Token(Token = "0x4000E76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string applicationUrl;

	[Token(Token = "0x4000E77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Type obj_type;

	[Token(Token = "0x1700032B")]
	public string ApplicationUrl
	{
		[Token(Token = "0x6001C80")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032C")]
	public IContextAttribute[] ContextAttributes
	{
		[Token(Token = "0x6001C81")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032D")]
	public Type ObjectType
	{
		[Token(Token = "0x6001C82")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C7F")]
	[Address(RVA = "0x19D1F70", Offset = "0x19D0570", VA = "0x1819D1F70")]
	public ActivatedClientTypeEntry(string typeName, string assemblyName, string appUrl)
	{
	}

	[Token(Token = "0x6001C83")]
	[Address(RVA = "0x19D1F50", Offset = "0x19D0550", VA = "0x1819D1F50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
