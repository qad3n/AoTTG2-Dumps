using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000B2")]
internal sealed class Gen2GcCallback : CriticalFinalizerObject
{
	[Token(Token = "0x4000273")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Func<object, bool> _callback;

	[Token(Token = "0x4000274")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GCHandle _weakTargetObj;

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x4FB5580", Offset = "0x4FB5580", VA = "0x4FB5580")]
	private Gen2GcCallback()
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x4FB5590", Offset = "0x4FB5590", VA = "0x4FB5590")]
	public static void Register(Func<object, bool> callback, object targetObj)
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x4FB5610", Offset = "0x4FB5610", VA = "0x4FB5610")]
	private void Setup(Func<object, bool> callback, object targetObj)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x4FB5640", Offset = "0x4FB5640", VA = "0x4FB5640", Slot = "1")]
	~Gen2GcCallback()
	{
	}
}
