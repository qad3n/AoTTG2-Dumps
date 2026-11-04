// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AndroidJavaRunnableProxy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000005")]
internal class AndroidJavaRunnableProxy : AndroidJavaProxy
{
	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x20")]
	private AndroidJavaRunnable mRunnable;

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x2EA4660", Offset = "0x2EA2C60", VA = "0x182EA4660")]
	public AndroidJavaRunnableProxy(AndroidJavaRunnable runnable)
	{
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x2EA4730", Offset = "0x2EA2D30", VA = "0x182EA4730")]
	public void run()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x2EA45B0", Offset = "0x2EA2BB0", VA = "0x182EA45B0", Slot = "6")]
	public override IntPtr Invoke(string methodName, IntPtr javaArgs)
	{
		return default(IntPtr);
	}
}
