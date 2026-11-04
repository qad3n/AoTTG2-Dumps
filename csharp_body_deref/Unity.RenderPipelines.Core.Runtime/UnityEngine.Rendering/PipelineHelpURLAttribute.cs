// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PipelineHelpURLAttribute
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

[Token(Token = "0x20000E9")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Enum, AllowMultiple = true)]
public class PipelineHelpURLAttribute : HelpURLAttribute
{
	[Token(Token = "0x170000E8")]
	private string pipelineName
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E9")]
	private string pageName
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EA")]
	private string pageHash
	{
		[Token(Token = "0x6000857")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EB")]
	public override string URL
	{
		[Token(Token = "0x6000859")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x2B0C2C0", Offset = "0x2B0A8C0", VA = "0x182B0C2C0")]
	public PipelineHelpURLAttribute(string pipelineName, string pageName, string pageHash = "")
	{
	}
}
