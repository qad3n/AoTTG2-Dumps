// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.ConvertBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000262")]
public abstract class ConvertBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x1700025F")]
	public Type Type
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x193D700", Offset = "0x193BD00", VA = "0x18193D700")]
	public DynamicMetaObject FallbackConvert(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000BC5")]
	public abstract DynamicMetaObject FallbackConvert(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x2469350", Offset = "0x2467950", VA = "0x182469350", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
