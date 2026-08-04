// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.SetMemberBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200027B")]
public abstract class SetMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000287")]
	public sealed override Type ReturnType
	{
		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x4511020", Offset = "0x4511020", VA = "0x4511020", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public string Name
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x4511060", Offset = "0x4511060", VA = "0x4511060")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C7D")]
		[Address(RVA = "0x4511070", Offset = "0x4511070", VA = "0x4511070")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028A")]
	internal sealed override bool IsStandardBinder
	{
		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x4511170", Offset = "0x4511170", VA = "0x4511170", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C7A")]
	[Address(RVA = "0x4510F80", Offset = "0x4510F80", VA = "0x4510F80")]
	protected SetMemberBinder(string name, bool ignoreCase)
	{
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x4511080", Offset = "0x4511080", VA = "0x4511080", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	[Address(RVA = "0x4511180", Offset = "0x4511180", VA = "0x4511180")]
	public DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000C81")]
	public abstract DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value, DynamicMetaObject errorSuggestion);
}
