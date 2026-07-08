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
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x4A80230", Offset = "0x4A80230", VA = "0x4A80230")]
		[UnityEngine.Bindings.NativeMethod("GetAssetBundleBlocking")]
		get;
	}
}
