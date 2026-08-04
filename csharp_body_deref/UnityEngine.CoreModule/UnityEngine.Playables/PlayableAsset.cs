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
[Token(Token = "0x200032C")]
[UnityEngine.AssetFileNameExtension("playable", new string[] { })]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class PlayableAsset : ScriptableObject
{
	[Token(Token = "0x170002C2")]
	public virtual double duration
	{
		[Token(Token = "0x6001149")]
		[Address(RVA = "0x4E37BA0", Offset = "0x4E37BA0", VA = "0x4E37BA0", Slot = "5")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170002C3")]
	public virtual IEnumerable<PlayableBinding> outputs
	{
		[Token(Token = "0x600114A")]
		[Address(RVA = "0x4E37C10", Offset = "0x4E37C10", VA = "0x4E37C10", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001148")]
	public abstract Playable CreatePlayable(PlayableGraph graph, GameObject owner);

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x4E37C80", Offset = "0x4E37C80", VA = "0x4E37C80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_CreatePlayable(PlayableAsset asset, PlayableGraph graph, GameObject go, IntPtr ptr)
	{
	}

	[Token(Token = "0x600114C")]
	[Address(RVA = "0x4E37D90", Offset = "0x4E37D90", VA = "0x4E37D90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_GetPlayableAssetDuration(PlayableAsset asset, IntPtr ptrToDouble)
	{
	}

	[Token(Token = "0x600114D")]
	[Address(RVA = "0x4E37DC0", Offset = "0x4E37DC0", VA = "0x4E37DC0")]
	protected PlayableAsset()
	{
	}
}
