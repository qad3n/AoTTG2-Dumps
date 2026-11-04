// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.ForestCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/ForestCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/ForestCustomSkinLoader.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomSkins;

[Token(Token = "0x2000360")]
internal class ForestCustomSkinLoader : LevelCustomSkinLoader
{
	[Token(Token = "0x2000361")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001192")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001193")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001194")]
		[FieldOffset(Offset = "0x20")]
		public ForestCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4001195")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4001196")]
		[FieldOffset(Offset = "0x30")]
		private int[] _003CtrunkRandomIndices_003E5__2;

		[Token(Token = "0x4001197")]
		[FieldOffset(Offset = "0x38")]
		private int[] _003CleafRandomIndices_003E5__3;

		[Token(Token = "0x4001198")]
		[FieldOffset(Offset = "0x40")]
		private string[] _003CtrunkUrls_003E5__4;

		[Token(Token = "0x4001199")]
		[FieldOffset(Offset = "0x48")]
		private string[] _003CleafUrls_003E5__5;

		[Token(Token = "0x400119A")]
		[FieldOffset(Offset = "0x50")]
		private string _003CgroundUrl_003E5__6;

		[Token(Token = "0x400119B")]
		[FieldOffset(Offset = "0x58")]
		private int _003Ci_003E5__7;

		[Token(Token = "0x400119C")]
		[FieldOffset(Offset = "0x60")]
		private string _003CleafUrl_003E5__8;

		[Token(Token = "0x400119D")]
		[FieldOffset(Offset = "0x68")]
		private BaseCustomSkinPart _003CleafPart_003E5__9;

		[Token(Token = "0x400119E")]
		[FieldOffset(Offset = "0x70")]
		private List<GameObject>.Enumerator _003C_003E7__wrap9;

		[Token(Token = "0x1700024C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600157B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700024D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600157D")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001577")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001578")]
		[Address(RVA = "0x1E792C0", Offset = "0x1E778C0", VA = "0x181E792C0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001579")]
		[Address(RVA = "0x1E78AD0", Offset = "0x1E770D0", VA = "0x181E78AD0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600157A")]
		[Address(RVA = "0x1E79350", Offset = "0x1E77950", VA = "0x181E79350")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x600157C")]
		[Address(RVA = "0x1E79280", Offset = "0x1E77880", VA = "0x181E79280", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001190")]
	[FieldOffset(Offset = "0x28")]
	private List<GameObject> _treeObjects;

	[Token(Token = "0x4001191")]
	[FieldOffset(Offset = "0x30")]
	private List<GameObject> _groundObjects;

	[Token(Token = "0x1700024B")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6001571")]
		[Address(RVA = "0x1E66870", Offset = "0x1E64E70", VA = "0x181E66870", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001572")]
	[Address(RVA = "0x1E66620", Offset = "0x1E64C20", VA = "0x181E66620", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__4))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001573")]
	[Address(RVA = "0x1E661F0", Offset = "0x1E647F0", VA = "0x181E661F0")]
	protected BaseCustomSkinPart GetCustomSkinPart(int partId, GameObject levelObject)
	{
		return null;
	}

	[Token(Token = "0x6001574")]
	[Address(RVA = "0x1E65F70", Offset = "0x1E64570", VA = "0x181E65F70", Slot = "9")]
	protected override void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x6001575")]
	[Address(RVA = "0x1E666B0", Offset = "0x1E64CB0", VA = "0x181E666B0")]
	private int[] SplitRandomIndices(char[] randomIndices, int offset)
	{
		return null;
	}

	[Token(Token = "0x6001576")]
	[Address(RVA = "0x1E667C0", Offset = "0x1E64DC0", VA = "0x181E667C0")]
	public ForestCustomSkinLoader()
	{
	}
}
