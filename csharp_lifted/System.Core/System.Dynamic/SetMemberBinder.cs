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

[Token(Token = "0x200027C")]
public abstract class SetMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000289")]
	public sealed override Type ReturnType
	{
		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x5E25C20", Offset = "0x5E24C20", VA = "0x5E25C20", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028A")]
	public string Name
	{
		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x5E25C50", Offset = "0x5E24C50", VA = "0x5E25C50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700028B")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C87")]
		[Address(RVA = "0x5E25C60", Offset = "0x5E24C60", VA = "0x5E25C60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028C")]
	internal sealed override bool IsStandardBinder
	{
		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x5E25D50", Offset = "0x5E24D50", VA = "0x5E25D50", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x5E25B80", Offset = "0x5E24B80", VA = "0x5E25B80")]
	protected SetMemberBinder(string name, bool ignoreCase)
	{
	}

	[Token(Token = "0x6000C88")]
	[Address(RVA = "0x5E25C70", Offset = "0x5E24C70", VA = "0x5E25C70", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x5E25D60", Offset = "0x5E24D60", VA = "0x5E25D60")]
	public DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000C8B")]
	public abstract DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value, DynamicMetaObject errorSuggestion);
}
