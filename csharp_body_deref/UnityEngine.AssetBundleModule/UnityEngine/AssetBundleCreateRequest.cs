// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssetBundleCreateRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000003")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromAsyncOperation.h")]
public class AssetBundleCreateRequest : AsyncOperation
{
	[Token(Token = "0x17000001")]
	public extern AssetBundle assetBundle
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4DA7A50", Offset = "0x4DA7A50", VA = "0x4DA7A50")]
		[UnityEngine.Bindings.NativeMethod("GetAssetBundleBlocking")]
		get;
	}
}
