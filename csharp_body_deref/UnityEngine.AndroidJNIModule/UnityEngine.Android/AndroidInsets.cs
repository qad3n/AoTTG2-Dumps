// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Android.AndroidInsets
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Android;

[Token(Token = "0x2000011")]
[UnityEngine.Bindings.NativeHeader("Modules/AndroidJNI/Public/AndroidInsets.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.StaticAccessor("AndroidInsets", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
internal class AndroidInsets
{
	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr m_NativeHandle;

	[Token(Token = "0x600013E")]
	[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
	[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
	private void SetNativeHandle(IntPtr ptr)
	{
	}
}
