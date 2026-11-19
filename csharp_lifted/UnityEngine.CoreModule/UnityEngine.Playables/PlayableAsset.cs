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
[UnityEngine.AssetFileNameExtension("playable", new string[] { })]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class PlayableAsset : ScriptableObject
{
	[Token(Token = "0x170002E9")]
	public virtual double duration
	{
		[Token(Token = "0x600123C")]
		[Address(RVA = "0x693AC70", Offset = "0x6939C70", VA = "0x693AC70", Slot = "5")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170002EA")]
	public virtual IEnumerable<PlayableBinding> outputs
	{
		[Token(Token = "0x600123D")]
		[Address(RVA = "0x693ACE0", Offset = "0x6939CE0", VA = "0x693ACE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600123B")]
	public abstract Playable CreatePlayable(PlayableGraph graph, GameObject owner);

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x693AD50", Offset = "0x6939D50", VA = "0x693AD50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_CreatePlayable(PlayableAsset asset, PlayableGraph graph, GameObject go, IntPtr ptr)
	{
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x693AE60", Offset = "0x6939E60", VA = "0x693AE60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_GetPlayableAssetDuration(PlayableAsset asset, IntPtr ptrToDouble)
	{
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x693AE90", Offset = "0x6939E90", VA = "0x693AE90")]
	protected PlayableAsset()
	{
	}
}
