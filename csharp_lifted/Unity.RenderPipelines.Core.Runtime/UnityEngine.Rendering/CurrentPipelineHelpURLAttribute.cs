// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CurrentPipelineHelpURLAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000E8")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Enum, AllowMultiple = false)]
public class CurrentPipelineHelpURLAttribute : HelpURLAttribute
{
	[Token(Token = "0x170000E5")]
	private string pageName
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x64FAEC0", Offset = "0x64F9EC0", VA = "0x64FAEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E6")]
	private string pageHash
	{
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x64FAED0", Offset = "0x64F9ED0", VA = "0x64FAED0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E7")]
	public override string URL
	{
		[Token(Token = "0x6000854")]
		[Address(RVA = "0x64FAF20", Offset = "0x64F9F20", VA = "0x64FAF20", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x64FAEE0", Offset = "0x64F9EE0", VA = "0x64FAEE0")]
	public CurrentPipelineHelpURLAttribute(string pageName, string pageHash = "")
	{
	}
}
