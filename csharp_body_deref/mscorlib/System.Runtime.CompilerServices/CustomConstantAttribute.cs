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
[Token(Token = "0x200049E")]
[AttributeUsage(AttributeTargets.Field | AttributeTargets.Parameter, Inherited = false)]
public abstract class CustomConstantAttribute : Attribute
{
	[Token(Token = "0x1700046D")]
	public abstract object Value
	{
		[Token(Token = "0x60022E9")]
		get;
	}

	[Token(Token = "0x60022EA")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	protected CustomConstantAttribute()
	{
	}
}
