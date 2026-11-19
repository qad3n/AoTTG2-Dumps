// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ManagedStreamHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.IO;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A8")]
internal static class ManagedStreamHelpers
{
	[Token(Token = "0x6000DEF")]
	[Address(RVA = "0x691B100", Offset = "0x691A100", VA = "0x691B100")]
	internal static void ValidateLoadFromStream(Stream stream)
	{
	}

	[Token(Token = "0x6000DF0")]
	[Address(RVA = "0x691B200", Offset = "0x691A200", VA = "0x691B200")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamRead(byte[] buffer, int offset, int count, Stream stream, IntPtr returnValueAddress)
	{
	}

	[Token(Token = "0x6000DF1")]
	[Address(RVA = "0x691B2C0", Offset = "0x691A2C0", VA = "0x691B2C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamSeek(long offset, uint origin, Stream stream, IntPtr returnValueAddress)
	{
	}

	[Token(Token = "0x6000DF2")]
	[Address(RVA = "0x691B380", Offset = "0x691A380", VA = "0x691B380")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamLength(Stream stream, IntPtr returnValueAddress)
	{
	}
}
