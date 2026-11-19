// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.CustomConstantAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Serializable]
[Token(Token = "0x2000477")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public abstract class CustomConstantAttribute : Attribute
{
	[Token(Token = "0x1700046C")]
	public abstract object Value
	{
		[Token(Token = "0x60022B6")]
		get;
	}

	[Token(Token = "0x60022B7")]
	[Address(RVA = "0x53C8640", Offset = "0x53C7640", VA = "0x53C8640")]
	protected CustomConstantAttribute()
	{
	}
}
