using System;
using System.IO;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000170")]
internal static class ManagedStreamHelpers
{
	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x4AD4E20", Offset = "0x4AD4E20", VA = "0x4AD4E20")]
	internal static void ValidateLoadFromStream(Stream stream)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x4AD4F20", Offset = "0x4AD4F20", VA = "0x4AD4F20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamRead(byte[] buffer, int offset, int count, Stream stream, IntPtr returnValueAddress)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x4AD4FE0", Offset = "0x4AD4FE0", VA = "0x4AD4FE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamSeek(long offset, uint origin, Stream stream, IntPtr returnValueAddress)
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x4AD50A0", Offset = "0x4AD50A0", VA = "0x4AD50A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ManagedStreamLength(Stream stream, IntPtr returnValueAddress)
	{
	}
}
