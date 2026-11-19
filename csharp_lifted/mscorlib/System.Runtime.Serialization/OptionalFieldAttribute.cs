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

[Token(Token = "0x20003F2")]
[ComVisible(true)]
[AttributeUsage(AttributeTargets.Field, Inherited = false)]
public sealed class OptionalFieldAttribute : Attribute
{
	[Token(Token = "0x4000F7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int versionAdded;

	[Token(Token = "0x1700043C")]
	public int VersionAdded
	{
		[Token(Token = "0x6002035")]
		[Address(RVA = "0x53A6750", Offset = "0x53A5750", VA = "0x53A6750")]
		set
		{
		}
	}

	[Token(Token = "0x6002034")]
	[Address(RVA = "0x53A6740", Offset = "0x53A5740", VA = "0x53A6740")]
	public OptionalFieldAttribute()
	{
	}
}
