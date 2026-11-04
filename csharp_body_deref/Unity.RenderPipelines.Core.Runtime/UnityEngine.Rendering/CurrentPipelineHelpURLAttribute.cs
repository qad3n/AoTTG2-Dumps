// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.CurrentPipelineHelpURLAttribute
// Update status: NEW in this game update
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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
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
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
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
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x2B0B040", Offset = "0x2B09640", VA = "0x182B0B040")]
	public CurrentPipelineHelpURLAttribute(string pageName, string pageHash = "")
	{
	}
}
