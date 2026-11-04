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
		[Token(Token = "0x6000C65")]
		[Address(RVA = "0x1C79630", Offset = "0x1C77C30", VA = "0x181C79630", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000282")]
	public string Name
	{
		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000283")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C67")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000284")]
	internal sealed override bool IsStandardBinder
	{
		[Token(Token = "0x6000C6B")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x24850C0", Offset = "0x24836C0", VA = "0x1824850C0")]
	protected GetMemberBinder(string name, bool ignoreCase)
	{
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x193D700", Offset = "0x193BD00", VA = "0x18193D700")]
	public DynamicMetaObject FallbackGetMember(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000C69")]
	public abstract DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x2484FD0", Offset = "0x24835D0", VA = "0x182484FD0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
