// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PipelineHelpURLAttribute
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

[Token(Token = "0x20000E9")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Enum, AllowMultiple = true)]
public class PipelineHelpURLAttribute : HelpURLAttribute
{
	[Token(Token = "0x170000E8")]
	private string pipelineName
	{
		[Token(Token = "0x6000855")]
		[Address(RVA = "0x64FAF40", Offset = "0x64F9F40", VA = "0x64FAF40")]
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
		[Address(RVA = "0x64FAF50", Offset = "0x64F9F50", VA = "0x64FAF50")]
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
		[Address(RVA = "0x64FAF60", Offset = "0x64F9F60", VA = "0x64FAF60")]
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
		[Address(RVA = "0x64FAFD0", Offset = "0x64F9FD0", VA = "0x64FAFD0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x64FAF70", Offset = "0x64F9F70", VA = "0x64FAF70")]
	public PipelineHelpURLAttribute(string pipelineName, string pageName, string pageHash = "")
	{
	}
}
