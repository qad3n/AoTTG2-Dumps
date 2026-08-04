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

[Token(Token = "0x2000246")]
internal class ForestCustomSkinLoader : LevelCustomSkinLoader
{
	[Token(Token = "0x2000247")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000C66")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000C67")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000C68")]
		[FieldOffset(Offset = "0x20")]
		public ForestCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4000C69")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x4000C6A")]
		[FieldOffset(Offset = "0x30")]
		private int[] _003CtrunkRandomIndices_003E5__2;

		[Token(Token = "0x4000C6B")]
		[FieldOffset(Offset = "0x38")]
		private int[] _003CleafRandomIndices_003E5__3;

		[Token(Token = "0x4000C6C")]
		[FieldOffset(Offset = "0x40")]
		private string[] _003CtrunkUrls_003E5__4;

		[Token(Token = "0x4000C6D")]
		[FieldOffset(Offset = "0x48")]
		private string[] _003CleafUrls_003E5__5;

		[Token(Token = "0x4000C6E")]
		[FieldOffset(Offset = "0x50")]
		private string _003CgroundUrl_003E5__6;

		[Token(Token = "0x4000C6F")]
		[FieldOffset(Offset = "0x58")]
		private int _003Ci_003E5__7;

		[Token(Token = "0x4000C70")]
		[FieldOffset(Offset = "0x60")]
		private string _003CleafUrl_003E5__8;

		[Token(Token = "0x4000C71")]
		[FieldOffset(Offset = "0x68")]
		private BaseCustomSkinPart _003CleafPart_003E5__9;

		[Token(Token = "0x4000C72")]
		[FieldOffset(Offset = "0x70")]
		private List<GameObject>.Enumerator _003C_003E7__wrap9;

		[Token(Token = "0x170001B6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000E1B")]
			[Address(RVA = "0x3F907D0", Offset = "0x3F907D0", VA = "0x3F907D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170001B7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000E1D")]
			[Address(RVA = "0x3F90820", Offset = "0x3F90820", VA = "0x3F90820", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000E17")]
		[Address(RVA = "0x3F8F390", Offset = "0x3F8F390", VA = "0x3F8F390")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__4(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000E18")]
		[Address(RVA = "0x3F8FC40", Offset = "0x3F8FC40", VA = "0x3F8FC40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000E19")]
		[Address(RVA = "0x3F8FC90", Offset = "0x3F8FC90", VA = "0x3F8FC90", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000E1A")]
		[Address(RVA = "0x3F90790", Offset = "0x3F90790", VA = "0x3F90790")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6000E1C")]
		[Address(RVA = "0x3F907E0", Offset = "0x3F907E0", VA = "0x3F907E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4000C64")]
	[FieldOffset(Offset = "0x28")]
	private List<GameObject> _treeObjects;

	[Token(Token = "0x4000C65")]
	[FieldOffset(Offset = "0x30")]
	private List<GameObject> _groundObjects;

	[Token(Token = "0x170001B5")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x3F8F2E0", Offset = "0x3F8F2E0", VA = "0x3F8F2E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x3F8F310", Offset = "0x3F8F310", VA = "0x3F8F310", Slot = "6")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__4))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x3F8F3B0", Offset = "0x3F8F3B0", VA = "0x3F8F3B0")]
	protected BaseCustomSkinPart GetCustomSkinPart(int partId, GameObject levelObject)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x3F8F530", Offset = "0x3F8F530", VA = "0x3F8F530", Slot = "8")]
	protected override void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x3F8F920", Offset = "0x3F8F920", VA = "0x3F8F920")]
	private int[] SplitRandomIndices(char[] randomIndices, int offset)
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x3F8FAF0", Offset = "0x3F8FAF0", VA = "0x3F8FAF0")]
	public ForestCustomSkinLoader()
	{
	}
}
