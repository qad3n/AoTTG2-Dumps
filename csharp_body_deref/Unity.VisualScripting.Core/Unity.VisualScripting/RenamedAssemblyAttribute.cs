// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.RenamedAssemblyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000169")]
[AttributeUsage(AttributeTargets.Assembly, AllowMultiple = true)]
public sealed class RenamedAssemblyAttribute : Attribute
{
	[Token(Token = "0x17000173")]
	public string previousName
	{
		[Token(Token = "0x6000E7A")]
		[Address(RVA = "0x4D476E0", Offset = "0x4D476E0", VA = "0x4D476E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000174")]
	public string newName
	{
		[Token(Token = "0x6000E7B")]
		[Address(RVA = "0x4D476F0", Offset = "0x4D476F0", VA = "0x4D476F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x4D476A0", Offset = "0x4D476A0", VA = "0x4D476A0")]
	public RenamedAssemblyAttribute(string previousName, string newName)
	{
	}
}
