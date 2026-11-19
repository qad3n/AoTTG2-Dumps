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

[Token(Token = "0x2000342")]
[ComVisible(true)]
public class ActivatedClientTypeEntry : TypeEntry
{
	[Token(Token = "0x4000DD6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string applicationUrl;

	[Token(Token = "0x4000DD7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Type obj_type;

	[Token(Token = "0x1700032A")]
	public string ApplicationUrl
	{
		[Token(Token = "0x6001C56")]
		[Address(RVA = "0x5368E80", Offset = "0x5367E80", VA = "0x5368E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032B")]
	public IContextAttribute[] ContextAttributes
	{
		[Token(Token = "0x6001C57")]
		[Address(RVA = "0x5368E90", Offset = "0x5367E90", VA = "0x5368E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032C")]
	public Type ObjectType
	{
		[Token(Token = "0x6001C58")]
		[Address(RVA = "0x5368EA0", Offset = "0x5367EA0", VA = "0x5368EA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C55")]
	[Address(RVA = "0x5368D30", Offset = "0x5367D30", VA = "0x5368D30")]
	public ActivatedClientTypeEntry(string typeName, string assemblyName, string appUrl)
	{
	}

	[Token(Token = "0x6001C59")]
	[Address(RVA = "0x5368EB0", Offset = "0x5367EB0", VA = "0x5368EB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
