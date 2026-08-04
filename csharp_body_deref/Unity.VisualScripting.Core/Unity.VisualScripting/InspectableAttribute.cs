// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.InspectableAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200003F")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Property | AttributeTargets.Field, AllowMultiple = false, Inherited = true)]
public sealed class InspectableAttribute : Attribute, IInspectableAttribute
{
	[Token(Token = "0x17000061")]
	public int order
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x4CA39F0", Offset = "0x4CA39F0", VA = "0x4CA39F0", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x4CA3A00", Offset = "0x4CA3A00", VA = "0x4CA3A00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4CA39E0", Offset = "0x4CA39E0", VA = "0x4CA39E0")]
	public InspectableAttribute()
	{
	}
}
