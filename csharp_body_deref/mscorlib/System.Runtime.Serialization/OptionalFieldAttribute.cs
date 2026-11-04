// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.OptionalFieldAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x2000419")]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
[ComVisible(true)]
public sealed class OptionalFieldAttribute : Attribute
{
	[Token(Token = "0x400101F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int versionAdded;

	[Token(Token = "0x1700043D")]
	public int VersionAdded
	{
		[Token(Token = "0x600205F")]
		[Address(RVA = "0x1A1B910", Offset = "0x1A19F10", VA = "0x181A1B910")]
		set
		{
		}
	}

	[Token(Token = "0x600205E")]
	[Address(RVA = "0x1A1B900", Offset = "0x1A19F00", VA = "0x181A1B900")]
	public OptionalFieldAttribute()
	{
	}
}
