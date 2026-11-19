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

[Token(Token = "0x2000263")]
public abstract class ConvertBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000261")]
	public Type Type
	{
		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0x5E1E820", Offset = "0x5E1D820", VA = "0x5E1E820")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x5E1E830", Offset = "0x5E1D830", VA = "0x5E1E830")]
	public DynamicMetaObject FallbackConvert(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000BD0")]
	public abstract DynamicMetaObject FallbackConvert(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x5E1E850", Offset = "0x5E1D850", VA = "0x5E1E850", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
