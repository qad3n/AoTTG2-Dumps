using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Playables;

[Serializable]
[Token(Token = "0x2000329")]
[UnityEngine.AssetFileNameExtension("playable", new string[] { })]
[UnityEngine.Scripting.RequiredByNativeCode]
public abstract class PlayableAsset : ScriptableObject
{
	[Token(Token = "0x170002C1")]
	public virtual double duration
	{
		[Token(Token = "0x6001147")]
		[Address(RVA = "0x4B10270", Offset = "0x4B10270", VA = "0x4B10270", Slot = "5")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x170002C2")]
	public virtual IEnumerable<PlayableBinding> outputs
	{
		[Token(Token = "0x6001148")]
		[Address(RVA = "0x4B102E0", Offset = "0x4B102E0", VA = "0x4B102E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001146")]
	public abstract Playable CreatePlayable(PlayableGraph graph, GameObject owner);

	[Token(Token = "0x6001149")]
	[Address(RVA = "0x4B10350", Offset = "0x4B10350", VA = "0x4B10350")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_CreatePlayable(PlayableAsset asset, PlayableGraph graph, GameObject go, IntPtr ptr)
	{
	}

	[Token(Token = "0x600114A")]
	[Address(RVA = "0x4B10460", Offset = "0x4B10460", VA = "0x4B10460")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void Internal_GetPlayableAssetDuration(PlayableAsset asset, IntPtr ptrToDouble)
	{
	}

	[Token(Token = "0x600114B")]
	[Address(RVA = "0x4B10490", Offset = "0x4B10490", VA = "0x4B10490")]
	protected PlayableAsset()
	{
	}
}
