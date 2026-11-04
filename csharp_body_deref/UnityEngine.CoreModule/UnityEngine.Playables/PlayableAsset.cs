// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Playables.PlayableAsset
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Serializable]
[Token(Token = "0x2000303")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.AssetFileNameExtension("playable", new string[] { })]
public abstract class PlayableAsset : ScriptableObject
{
	[Token(Token = "0x170002E4")]
	public virtual double duration
	{
		[Token(Token = "0x6001228")]
		[Address(RVA = "0x2F4D7E0", Offset = "0x2F4BDE0", VA = "0x182F4D7E0", Slot = "5")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170002E5")]
	public virtual IEnumerable<PlayableBinding> outputs
	{
		[Token(Token = "0x6001229")]
		[Address(RVA = "0x2F4D830", Offset = "0x2F4BE30", VA = "0x182F4D830", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001227")]
	public abstract Playable CreatePlayable(PlayableGraph graph, GameObject owner);

	[Token(Token = "0x600122A")]
	[Address(RVA = "0x2F4D690", Offset = "0x2F4BC90", VA = "0x182F4D690")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_CreatePlayable(PlayableAsset asset, PlayableGraph graph, GameObject go, IntPtr ptr)
	{
	}

	[Token(Token = "0x600122B")]
	[Address(RVA = "0x2F4D7B0", Offset = "0x2F4BDB0", VA = "0x182F4D7B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_GetPlayableAssetDuration(PlayableAsset asset, IntPtr ptrToDouble)
	{
	}

	[Token(Token = "0x600122C")]
	[Address(RVA = "0xC8D110", Offset = "0xC8B710", VA = "0x180C8D110")]
	protected PlayableAsset()
	{
	}
}
