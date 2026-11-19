// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.TypeIconPriorityAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200004E")]
[AttributeUsage(AttributeTargets.Interface, AllowMultiple = false, Inherited = false)]
public sealed class TypeIconPriorityAttribute : Attribute
{
	[Token(Token = "0x17000072")]
	public int priority
	{
		[Token(Token = "0x6000211")]
		[Address(RVA = "0x6793440", Offset = "0x6792440", VA = "0x6793440")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600020F")]
	[Address(RVA = "0x6793400", Offset = "0x6792400", VA = "0x6793400")]
	public TypeIconPriorityAttribute(int priority)
	{
	}

	[Token(Token = "0x6000210")]
	[Address(RVA = "0x6793420", Offset = "0x6792420", VA = "0x6793420")]
	public TypeIconPriorityAttribute()
	{
	}
}
