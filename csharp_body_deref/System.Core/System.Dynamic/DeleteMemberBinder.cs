// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.DeleteMemberBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000265")]
public abstract class DeleteMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000260")]
	public string Name
	{
		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000261")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x193D700", Offset = "0x193BD00", VA = "0x18193D700")]
	public DynamicMetaObject FallbackDeleteMember(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000BD0")]
	public abstract DynamicMetaObject FallbackDeleteMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x246ABF0", Offset = "0x24691F0", VA = "0x18246ABF0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
