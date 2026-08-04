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

[Token(Token = "0x2000173")]
internal static class ManagedStreamHelpers
{
	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x4DFC750", Offset = "0x4DFC750", VA = "0x4DFC750")]
	internal static void ValidateLoadFromStream(Stream stream)
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x4DFC850", Offset = "0x4DFC850", VA = "0x4DFC850")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamRead(byte[] buffer, int offset, int count, Stream stream, IntPtr returnValueAddress)
	{
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x4DFC910", Offset = "0x4DFC910", VA = "0x4DFC910")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamSeek(long offset, uint origin, Stream stream, IntPtr returnValueAddress)
	{
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x4DFC9D0", Offset = "0x4DFC9D0", VA = "0x4DFC9D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamLength(Stream stream, IntPtr returnValueAddress)
	{
	}
}
