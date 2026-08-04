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

[Token(Token = "0x2000009")]
internal class AndroidJavaRunnableProxy : AndroidJavaProxy
{
	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x20")]
	private AndroidJavaRunnable mRunnable;

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4D99820", Offset = "0x4D99820", VA = "0x4D99820")]
	public AndroidJavaRunnableProxy(AndroidJavaRunnable runnable)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4D999C0", Offset = "0x4D999C0", VA = "0x4D999C0")]
	public void run()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4D999E0", Offset = "0x4D999E0", VA = "0x4D999E0", Slot = "6")]
	public override IntPtr Invoke(string methodName, IntPtr javaArgs)
	{
		return default(IntPtr);
	}
}
