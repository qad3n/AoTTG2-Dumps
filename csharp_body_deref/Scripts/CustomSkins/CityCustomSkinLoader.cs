// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.CityCustomSkinLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/CityCustomSkinLoader.c
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/CityCustomSkinLoader.cs
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

[Token(Token = "0x2000357")]
internal class CityCustomSkinLoader : LevelCustomSkinLoader
{
	[Token(Token = "0x2000358")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinsFromRPC_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001176")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001177")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001178")]
		[FieldOffset(Offset = "0x20")]
		public CityCustomSkinLoader _003C_003E4__this;

		[Token(Token = "0x4001179")]
		[FieldOffset(Offset = "0x28")]
		public object[] data;

		[Token(Token = "0x400117A")]
		[FieldOffset(Offset = "0x30")]
		private char[] _003CrandomIndices_003E5__2;

		[Token(Token = "0x400117B")]
		[FieldOffset(Offset = "0x38")]
		private string[] _003ChouseUrls_003E5__3;

		[Token(Token = "0x400117C")]
		[FieldOffset(Offset = "0x40")]
		private string[] _003CmiscUrls_003E5__4;

		[Token(Token = "0x400117D")]
		[FieldOffset(Offset = "0x48")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x400117E")]
		[FieldOffset(Offset = "0x50")]
		private List<GameObject>.Enumerator _003C_003E7__wrap5;

		[Token(Token = "0x17000243")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600155A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000244")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600155C")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001554")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CLoadSkinsFromRPC_003Ed__6(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6001555")]
		[Address(RVA = "0x1E7A010", Offset = "0x1E78610", VA = "0x181E7A010", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6001556")]
		[Address(RVA = "0x1E793A0", Offset = "0x1E779A0", VA = "0x181E793A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6001557")]
		[Address(RVA = "0x1E7A1B0", Offset = "0x1E787B0", VA = "0x181E7A1B0")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x6001558")]
		[Address(RVA = "0x1E7A200", Offset = "0x1E78800", VA = "0x181E7A200")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x6001559")]
		[Address(RVA = "0x1E7A250", Offset = "0x1E78850", VA = "0x181E7A250")]
		private void _003C_003Em__Finally3()
		{
		}

		[Token(Token = "0x600155B")]
		[Address(RVA = "0x1E79FD0", Offset = "0x1E785D0", VA = "0x181E79FD0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001172")]
	[FieldOffset(Offset = "0x28")]
	private List<GameObject> _houseObjects;

	[Token(Token = "0x4001173")]
	[FieldOffset(Offset = "0x30")]
	private List<GameObject> _groundObjects;

	[Token(Token = "0x4001174")]
	[FieldOffset(Offset = "0x38")]
	private List<GameObject> _wallObjects;

	[Token(Token = "0x4001175")]
	[FieldOffset(Offset = "0x40")]
	private List<GameObject> _gateObjects;

	[Token(Token = "0x17000242")]
	protected override string RendererIdPrefix
	{
		[Token(Token = "0x600154F")]
		[Address(RVA = "0x1E63BA0", Offset = "0x1E621A0", VA = "0x181E63BA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001550")]
	[Address(RVA = "0x1E63A00", Offset = "0x1E62000", VA = "0x181E63A00", Slot = "7")]
	[IteratorStateMachine(typeof(_003CLoadSkinsFromRPC_003Ed__6))]
	public override IEnumerator LoadSkinsFromRPC(object[] data)
	{
		return null;
	}

	[Token(Token = "0x6001551")]
	[Address(RVA = "0x1E63770", Offset = "0x1E61D70", VA = "0x181E63770")]
	protected BaseCustomSkinPart GetCustomSkinPart(int partId, GameObject levelObject)
	{
		return null;
	}

	[Token(Token = "0x6001552")]
	[Address(RVA = "0x1E63400", Offset = "0x1E61A00", VA = "0x181E63400", Slot = "9")]
	protected override void FindAndIndexLevelObjects()
	{
	}

	[Token(Token = "0x6001553")]
	[Address(RVA = "0x1E63A90", Offset = "0x1E62090", VA = "0x181E63A90")]
	public CityCustomSkinLoader()
	{
	}
}
