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

[Token(Token = "0x20001A7")]
internal static class ManagedStreamHelpers
{
	[Token(Token = "0x6000DDD")]
	[Address(RVA = "0x2F1BC40", Offset = "0x2F1A240", VA = "0x182F1BC40")]
	internal static void ValidateLoadFromStream(Stream stream)
	{
	}

	[Token(Token = "0x6000DDE")]
	[Address(RVA = "0x2F1BAA0", Offset = "0x2F1A0A0", VA = "0x182F1BAA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamRead(byte[] buffer, int offset, int count, Stream stream, IntPtr returnValueAddress)
	{
	}

	[Token(Token = "0x6000DDF")]
	[Address(RVA = "0x2F1BB80", Offset = "0x2F1A180", VA = "0x182F1BB80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamSeek(long offset, uint origin, Stream stream, IntPtr returnValueAddress)
	{
	}

	[Token(Token = "0x6000DE0")]
	[Address(RVA = "0x2F1B9E0", Offset = "0x2F19FE0", VA = "0x182F1B9E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamLength(Stream stream, IntPtr returnValueAddress)
	{
	}
}
