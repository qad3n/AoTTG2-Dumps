// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.ShaderRuntimeInfoAnalytic
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000314")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
internal class ShaderRuntimeInfoAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x40007C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public long VariantsRequested;

	[Token(Token = "0x40007CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public long VariantsRequestedMissing;

	[Token(Token = "0x40007CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public long VariantsRequestedUnsupported;

	[Token(Token = "0x40007CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public long VariantsRequestedCompiled;

	[Token(Token = "0x40007CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public long VariantsRequestedViaWarmup;

	[Token(Token = "0x40007CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public long VariantsUnused;

	[Token(Token = "0x40007CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	public int VariantsCompilationTimeTotal;

	[Token(Token = "0x40007D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	public int VariantsCompilationTimeMax;

	[Token(Token = "0x40007D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	public int VariantsCompilationTimeMedian;

	[Token(Token = "0x40007D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	public int VariantsWarmupTimeTotal;

	[Token(Token = "0x40007D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	public int VariantsWarmupTimeMax;

	[Token(Token = "0x40007D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	public int VariantsWarmupTimeMedian;

	[Token(Token = "0x40007D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	public bool UseProgressiveWarmup;

	[Token(Token = "0x40007D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7C")]
	public int ShaderChunkSizeMin;

	[Token(Token = "0x40007D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	public int ShaderChunkSizeMax;

	[Token(Token = "0x40007D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	public int ShaderChunkSizeAvg;

	[Token(Token = "0x40007D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	public int ShaderChunkCountMin;

	[Token(Token = "0x40007DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	public int ShaderChunkCountMax;

	[Token(Token = "0x40007DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	public int ShaderChunkCountAvg;

	[Token(Token = "0x6001271")]
	[Address(RVA = "0x2F57980", Offset = "0x2F55F80", VA = "0x182F57980")]
	private ShaderRuntimeInfoAnalytic()
	{
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x2F57890", Offset = "0x2F55E90", VA = "0x182F57890")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static ShaderRuntimeInfoAnalytic CreateShaderRuntimeInfoAnalytic()
	{
		return null;
	}
}
