// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.GetMemberBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000276")]
public abstract class GetMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000281")]
	public sealed override Type ReturnType
	{
		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x4510A60", Offset = "0x4510A60", VA = "0x4510A60", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public string Name
	{
		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x4510AA0", Offset = "0x4510AA0", VA = "0x4510AA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000283")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x4510AB0", Offset = "0x4510AB0", VA = "0x4510AB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000284")]
	internal sealed override bool IsStandardBinder
	{
		[Token(Token = "0x6000C6C")]
		[Address(RVA = "0x4510BD0", Offset = "0x4510BD0", VA = "0x4510BD0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x45109C0", Offset = "0x45109C0", VA = "0x45109C0")]
	protected GetMemberBinder(string name, bool ignoreCase)
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x450F200", Offset = "0x450F200", VA = "0x450F200")]
	public DynamicMetaObject FallbackGetMember(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000C6A")]
	public abstract DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x4510AC0", Offset = "0x4510AC0", VA = "0x4510AC0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
