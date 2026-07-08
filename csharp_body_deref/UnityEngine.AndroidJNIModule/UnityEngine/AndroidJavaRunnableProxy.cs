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
	[Address(RVA = "0x4A72000", Offset = "0x4A72000", VA = "0x4A72000")]
	public AndroidJavaRunnableProxy(AndroidJavaRunnable runnable)
	{
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4A721A0", Offset = "0x4A721A0", VA = "0x4A721A0")]
	public void run()
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4A721C0", Offset = "0x4A721C0", VA = "0x4A721C0", Slot = "6")]
	public override IntPtr Invoke(string methodName, IntPtr javaArgs)
	{
		return default(IntPtr);
	}
}
