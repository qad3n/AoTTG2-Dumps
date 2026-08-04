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

[Token(Token = "0x20003EA")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
public sealed class OptionalFieldAttribute : Attribute
{
	[Token(Token = "0x400101A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int versionAdded;

	[Token(Token = "0x1700043B")]
	public int VersionAdded
	{
		[Token(Token = "0x6001FF0")]
		[Address(RVA = "0x3B9F280", Offset = "0x3B9F280", VA = "0x3B9F280")]
		set
		{
		}
	}

	[Token(Token = "0x6001FEF")]
	[Address(RVA = "0x3B9F270", Offset = "0x3B9F270", VA = "0x3B9F270")]
	public OptionalFieldAttribute()
	{
	}
}
