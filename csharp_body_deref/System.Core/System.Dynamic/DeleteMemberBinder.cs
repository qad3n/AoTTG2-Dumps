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

[Token(Token = "0x2000266")]
public abstract class DeleteMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000262")]
	public string Name
	{
		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x5E1EA70", Offset = "0x5E1DA70", VA = "0x5E1EA70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x5E1EA80", Offset = "0x5E1DA80", VA = "0x5E1EA80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x5E1EA90", Offset = "0x5E1DA90", VA = "0x5E1EA90")]
	public DynamicMetaObject FallbackDeleteMember(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000BDB")]
	public abstract DynamicMetaObject FallbackDeleteMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x5E1EAB0", Offset = "0x5E1DAB0", VA = "0x5E1EAB0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
