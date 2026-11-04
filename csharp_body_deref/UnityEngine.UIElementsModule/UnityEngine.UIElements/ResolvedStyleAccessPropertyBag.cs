// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ResolvedStyleAccessPropertyBag
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000388")]
internal class ResolvedStyleAccessPropertyBag : PropertyBag<ResolvedStyleAccess>, INamedProperties<ResolvedStyleAccess>
{
	[Token(Token = "0x2000389")]
	private class AlignContentProperty : ResolvedEnumProperty<Align>
	{
		[Token(Token = "0x170007AC")]
		public override string Name
		{
			[Token(Token = "0x6001B6C")]
			[Address(RVA = "0x30E9040", Offset = "0x30E7640", VA = "0x1830E9040", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007AD")]
		public override string ussName
		{
			[Token(Token = "0x6001B6D")]
			[Address(RVA = "0x30E9070", Offset = "0x30E7670", VA = "0x1830E9070", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007AE")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B6E")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B6F")]
		[Address(RVA = "0x30E8F70", Offset = "0x30E7570", VA = "0x1830E8F70", Slot = "14")]
		public override Align GetValue(ref ResolvedStyleAccess container)
		{
			return default(Align);
		}

		[Token(Token = "0x6001B70")]
		[Address(RVA = "0x30E8FC0", Offset = "0x30E75C0", VA = "0x1830E8FC0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Align value)
		{
		}

		[Token(Token = "0x6001B71")]
		[Address(RVA = "0x30E9000", Offset = "0x30E7600", VA = "0x1830E9000")]
		public AlignContentProperty()
		{
		}
	}

	[Token(Token = "0x200038A")]
	private class AlignItemsProperty : ResolvedEnumProperty<Align>
	{
		[Token(Token = "0x170007AF")]
		public override string Name
		{
			[Token(Token = "0x6001B72")]
			[Address(RVA = "0x30E9170", Offset = "0x30E7770", VA = "0x1830E9170", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007B0")]
		public override string ussName
		{
			[Token(Token = "0x6001B73")]
			[Address(RVA = "0x30E91A0", Offset = "0x30E77A0", VA = "0x1830E91A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007B1")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B74")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B75")]
		[Address(RVA = "0x30E90A0", Offset = "0x30E76A0", VA = "0x1830E90A0", Slot = "14")]
		public override Align GetValue(ref ResolvedStyleAccess container)
		{
			return default(Align);
		}

		[Token(Token = "0x6001B76")]
		[Address(RVA = "0x30E90F0", Offset = "0x30E76F0", VA = "0x1830E90F0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Align value)
		{
		}

		[Token(Token = "0x6001B77")]
		[Address(RVA = "0x30E9130", Offset = "0x30E7730", VA = "0x1830E9130")]
		public AlignItemsProperty()
		{
		}
	}

	[Token(Token = "0x200038B")]
	private class AlignSelfProperty : ResolvedEnumProperty<Align>
	{
		[Token(Token = "0x170007B2")]
		public override string Name
		{
			[Token(Token = "0x6001B78")]
			[Address(RVA = "0x30E92A0", Offset = "0x30E78A0", VA = "0x1830E92A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007B3")]
		public override string ussName
		{
			[Token(Token = "0x6001B79")]
			[Address(RVA = "0x30E92D0", Offset = "0x30E78D0", VA = "0x1830E92D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007B4")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B7A")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B7B")]
		[Address(RVA = "0x30E91D0", Offset = "0x30E77D0", VA = "0x1830E91D0", Slot = "14")]
		public override Align GetValue(ref ResolvedStyleAccess container)
		{
			return default(Align);
		}

		[Token(Token = "0x6001B7C")]
		[Address(RVA = "0x30E9220", Offset = "0x30E7820", VA = "0x1830E9220", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Align value)
		{
		}

		[Token(Token = "0x6001B7D")]
		[Address(RVA = "0x30E9260", Offset = "0x30E7860", VA = "0x1830E9260")]
		public AlignSelfProperty()
		{
		}
	}

	[Token(Token = "0x200038C")]
	private class AspectRatioProperty : ResolvedRatioProperty
	{
		[Token(Token = "0x170007B5")]
		public override string Name
		{
			[Token(Token = "0x6001B7E")]
			[Address(RVA = "0x30E9440", Offset = "0x30E7A40", VA = "0x1830E9440", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007B6")]
		public override string ussName
		{
			[Token(Token = "0x6001B7F")]
			[Address(RVA = "0x30E9470", Offset = "0x30E7A70", VA = "0x1830E9470", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007B7")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B80")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B81")]
		[Address(RVA = "0x30E9300", Offset = "0x30E7900", VA = "0x1830E9300", Slot = "14")]
		public override Ratio GetValue(ref ResolvedStyleAccess container)
		{
			return default(Ratio);
		}

		[Token(Token = "0x6001B82")]
		[Address(RVA = "0x30E93C0", Offset = "0x30E79C0", VA = "0x1830E93C0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Ratio value)
		{
		}

		[Token(Token = "0x6001B83")]
		[Address(RVA = "0x30E9400", Offset = "0x30E7A00", VA = "0x1830E9400")]
		public AspectRatioProperty()
		{
		}
	}

	[Token(Token = "0x200038D")]
	private class BackgroundColorProperty : ResolvedColorProperty
	{
		[Token(Token = "0x170007B8")]
		public override string Name
		{
			[Token(Token = "0x6001B84")]
			[Address(RVA = "0x30E95F0", Offset = "0x30E7BF0", VA = "0x1830E95F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007B9")]
		public override string ussName
		{
			[Token(Token = "0x6001B85")]
			[Address(RVA = "0x30E9620", Offset = "0x30E7C20", VA = "0x1830E9620", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007BA")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B86")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B87")]
		[Address(RVA = "0x30E94A0", Offset = "0x30E7AA0", VA = "0x1830E94A0", Slot = "14")]
		public override Color GetValue(ref ResolvedStyleAccess container)
		{
			return default(Color);
		}

		[Token(Token = "0x6001B88")]
		[Address(RVA = "0x30E9570", Offset = "0x30E7B70", VA = "0x1830E9570", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Color value)
		{
		}

		[Token(Token = "0x6001B89")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		public BackgroundColorProperty()
		{
		}
	}

	[Token(Token = "0x200038E")]
	private class BackgroundImageProperty : ResolvedBackgroundProperty
	{
		[Token(Token = "0x170007BB")]
		public override string Name
		{
			[Token(Token = "0x6001B8A")]
			[Address(RVA = "0x30E97B0", Offset = "0x30E7DB0", VA = "0x1830E97B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007BC")]
		public override string ussName
		{
			[Token(Token = "0x6001B8B")]
			[Address(RVA = "0x30E97E0", Offset = "0x30E7DE0", VA = "0x1830E97E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007BD")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B8C")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B8D")]
		[Address(RVA = "0x30E9650", Offset = "0x30E7C50", VA = "0x1830E9650", Slot = "14")]
		public override Background GetValue(ref ResolvedStyleAccess container)
		{
			return default(Background);
		}

		[Token(Token = "0x6001B8E")]
		[Address(RVA = "0x30E9730", Offset = "0x30E7D30", VA = "0x1830E9730", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Background value)
		{
		}

		[Token(Token = "0x6001B8F")]
		[Address(RVA = "0x30E9770", Offset = "0x30E7D70", VA = "0x1830E9770")]
		public BackgroundImageProperty()
		{
		}
	}

	[Token(Token = "0x200038F")]
	private class BackgroundPositionXProperty : ResolvedBackgroundPositionProperty
	{
		[Token(Token = "0x170007BE")]
		public override string Name
		{
			[Token(Token = "0x6001B90")]
			[Address(RVA = "0x30E9970", Offset = "0x30E7F70", VA = "0x1830E9970", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007BF")]
		public override string ussName
		{
			[Token(Token = "0x6001B91")]
			[Address(RVA = "0x30E99A0", Offset = "0x30E7FA0", VA = "0x1830E99A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C0")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B92")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B93")]
		[Address(RVA = "0x30E9810", Offset = "0x30E7E10", VA = "0x1830E9810", Slot = "14")]
		public override BackgroundPosition GetValue(ref ResolvedStyleAccess container)
		{
			return default(BackgroundPosition);
		}

		[Token(Token = "0x6001B94")]
		[Address(RVA = "0x30E98F0", Offset = "0x30E7EF0", VA = "0x1830E98F0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, BackgroundPosition value)
		{
		}

		[Token(Token = "0x6001B95")]
		[Address(RVA = "0x30E9930", Offset = "0x30E7F30", VA = "0x1830E9930")]
		public BackgroundPositionXProperty()
		{
		}
	}

	[Token(Token = "0x2000390")]
	private class BackgroundPositionYProperty : ResolvedBackgroundPositionProperty
	{
		[Token(Token = "0x170007C1")]
		public override string Name
		{
			[Token(Token = "0x6001B96")]
			[Address(RVA = "0x30E9AF0", Offset = "0x30E80F0", VA = "0x1830E9AF0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C2")]
		public override string ussName
		{
			[Token(Token = "0x6001B97")]
			[Address(RVA = "0x30E9B20", Offset = "0x30E8120", VA = "0x1830E9B20", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C3")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B98")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B99")]
		[Address(RVA = "0x30E99D0", Offset = "0x30E7FD0", VA = "0x1830E99D0", Slot = "14")]
		public override BackgroundPosition GetValue(ref ResolvedStyleAccess container)
		{
			return default(BackgroundPosition);
		}

		[Token(Token = "0x6001B9A")]
		[Address(RVA = "0x30E9AB0", Offset = "0x30E80B0", VA = "0x1830E9AB0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, BackgroundPosition value)
		{
		}

		[Token(Token = "0x6001B9B")]
		[Address(RVA = "0x30E9930", Offset = "0x30E7F30", VA = "0x1830E9930")]
		public BackgroundPositionYProperty()
		{
		}
	}

	[Token(Token = "0x2000391")]
	private class BackgroundRepeatProperty : ResolvedBackgroundRepeatProperty
	{
		[Token(Token = "0x170007C4")]
		public override string Name
		{
			[Token(Token = "0x6001B9C")]
			[Address(RVA = "0x30E9C90", Offset = "0x30E8290", VA = "0x1830E9C90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C5")]
		public override string ussName
		{
			[Token(Token = "0x6001B9D")]
			[Address(RVA = "0x30E9CC0", Offset = "0x30E82C0", VA = "0x1830E9CC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C6")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001B9E")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001B9F")]
		[Address(RVA = "0x30E9B50", Offset = "0x30E8150", VA = "0x1830E9B50", Slot = "14")]
		public override BackgroundRepeat GetValue(ref ResolvedStyleAccess container)
		{
			return default(BackgroundRepeat);
		}

		[Token(Token = "0x6001BA0")]
		[Address(RVA = "0x30E9C10", Offset = "0x30E8210", VA = "0x1830E9C10", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, BackgroundRepeat value)
		{
		}

		[Token(Token = "0x6001BA1")]
		[Address(RVA = "0x30E9C50", Offset = "0x30E8250", VA = "0x1830E9C50")]
		public BackgroundRepeatProperty()
		{
		}
	}

	[Token(Token = "0x2000392")]
	private class BackgroundSizeProperty : ResolvedBackgroundSizeProperty
	{
		[Token(Token = "0x170007C7")]
		public override string Name
		{
			[Token(Token = "0x6001BA2")]
			[Address(RVA = "0x30E9E50", Offset = "0x30E8450", VA = "0x1830E9E50", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C8")]
		public override string ussName
		{
			[Token(Token = "0x6001BA3")]
			[Address(RVA = "0x30E9E80", Offset = "0x30E8480", VA = "0x1830E9E80", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007C9")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BA4")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BA5")]
		[Address(RVA = "0x30E9CF0", Offset = "0x30E82F0", VA = "0x1830E9CF0", Slot = "14")]
		public override BackgroundSize GetValue(ref ResolvedStyleAccess container)
		{
			return default(BackgroundSize);
		}

		[Token(Token = "0x6001BA6")]
		[Address(RVA = "0x30E9DD0", Offset = "0x30E83D0", VA = "0x1830E9DD0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, BackgroundSize value)
		{
		}

		[Token(Token = "0x6001BA7")]
		[Address(RVA = "0x30E9E10", Offset = "0x30E8410", VA = "0x1830E9E10")]
		public BackgroundSizeProperty()
		{
		}
	}

	[Token(Token = "0x2000393")]
	private class BorderBottomColorProperty : ResolvedColorProperty
	{
		[Token(Token = "0x170007CA")]
		public override string Name
		{
			[Token(Token = "0x6001BA8")]
			[Address(RVA = "0x30EA9A0", Offset = "0x30E8FA0", VA = "0x1830EA9A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007CB")]
		public override string ussName
		{
			[Token(Token = "0x6001BA9")]
			[Address(RVA = "0x30EA9D0", Offset = "0x30E8FD0", VA = "0x1830EA9D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007CC")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BAA")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BAB")]
		[Address(RVA = "0x30EA890", Offset = "0x30E8E90", VA = "0x1830EA890", Slot = "14")]
		public override Color GetValue(ref ResolvedStyleAccess container)
		{
			return default(Color);
		}

		[Token(Token = "0x6001BAC")]
		[Address(RVA = "0x30EA960", Offset = "0x30E8F60", VA = "0x1830EA960", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Color value)
		{
		}

		[Token(Token = "0x6001BAD")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		public BorderBottomColorProperty()
		{
		}
	}

	[Token(Token = "0x2000394")]
	private class BorderBottomLeftRadiusProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007CD")]
		public override string Name
		{
			[Token(Token = "0x6001BAE")]
			[Address(RVA = "0x30EAAD0", Offset = "0x30E90D0", VA = "0x1830EAAD0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007CE")]
		public override string ussName
		{
			[Token(Token = "0x6001BAF")]
			[Address(RVA = "0x30EAB00", Offset = "0x30E9100", VA = "0x1830EAB00", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007CF")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BB0")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BB1")]
		[Address(RVA = "0x30EAA00", Offset = "0x30E9000", VA = "0x1830EAA00", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BB2")]
		[Address(RVA = "0x30EAA50", Offset = "0x30E9050", VA = "0x1830EAA50", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BB3")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BorderBottomLeftRadiusProperty()
		{
		}
	}

	[Token(Token = "0x2000395")]
	private class BorderBottomRightRadiusProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007D0")]
		public override string Name
		{
			[Token(Token = "0x6001BB4")]
			[Address(RVA = "0x30EABC0", Offset = "0x30E91C0", VA = "0x1830EABC0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007D1")]
		public override string ussName
		{
			[Token(Token = "0x6001BB5")]
			[Address(RVA = "0x30EABF0", Offset = "0x30E91F0", VA = "0x1830EABF0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007D2")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BB6")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BB7")]
		[Address(RVA = "0x30EAB30", Offset = "0x30E9130", VA = "0x1830EAB30", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BB8")]
		[Address(RVA = "0x30EAB80", Offset = "0x30E9180", VA = "0x1830EAB80", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BB9")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BorderBottomRightRadiusProperty()
		{
		}
	}

	[Token(Token = "0x2000396")]
	private class BorderBottomWidthProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007D3")]
		public override string Name
		{
			[Token(Token = "0x6001BBA")]
			[Address(RVA = "0x30EACB0", Offset = "0x30E92B0", VA = "0x1830EACB0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007D4")]
		public override string ussName
		{
			[Token(Token = "0x6001BBB")]
			[Address(RVA = "0x30EACE0", Offset = "0x30E92E0", VA = "0x1830EACE0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007D5")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BBC")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BBD")]
		[Address(RVA = "0x30EAC20", Offset = "0x30E9220", VA = "0x1830EAC20", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BBE")]
		[Address(RVA = "0x30EAC70", Offset = "0x30E9270", VA = "0x1830EAC70", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BBF")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BorderBottomWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000397")]
	private class BorderLeftColorProperty : ResolvedColorProperty
	{
		[Token(Token = "0x170007D6")]
		public override string Name
		{
			[Token(Token = "0x6001BC0")]
			[Address(RVA = "0x30EAE20", Offset = "0x30E9420", VA = "0x1830EAE20", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007D7")]
		public override string ussName
		{
			[Token(Token = "0x6001BC1")]
			[Address(RVA = "0x30EAE50", Offset = "0x30E9450", VA = "0x1830EAE50", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007D8")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BC2")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BC3")]
		[Address(RVA = "0x30EAD10", Offset = "0x30E9310", VA = "0x1830EAD10", Slot = "14")]
		public override Color GetValue(ref ResolvedStyleAccess container)
		{
			return default(Color);
		}

		[Token(Token = "0x6001BC4")]
		[Address(RVA = "0x30EADE0", Offset = "0x30E93E0", VA = "0x1830EADE0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Color value)
		{
		}

		[Token(Token = "0x6001BC5")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		public BorderLeftColorProperty()
		{
		}
	}

	[Token(Token = "0x2000398")]
	private class BorderLeftWidthProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007D9")]
		public override string Name
		{
			[Token(Token = "0x6001BC6")]
			[Address(RVA = "0x30EAF10", Offset = "0x30E9510", VA = "0x1830EAF10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007DA")]
		public override string ussName
		{
			[Token(Token = "0x6001BC7")]
			[Address(RVA = "0x30EAF40", Offset = "0x30E9540", VA = "0x1830EAF40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007DB")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BC8")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BC9")]
		[Address(RVA = "0x30EAE80", Offset = "0x30E9480", VA = "0x1830EAE80", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BCA")]
		[Address(RVA = "0x30EAED0", Offset = "0x30E94D0", VA = "0x1830EAED0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BCB")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BorderLeftWidthProperty()
		{
		}
	}

	[Token(Token = "0x2000399")]
	private class BorderRightColorProperty : ResolvedColorProperty
	{
		[Token(Token = "0x170007DC")]
		public override string Name
		{
			[Token(Token = "0x6001BCC")]
			[Address(RVA = "0x30EB080", Offset = "0x30E9680", VA = "0x1830EB080", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007DD")]
		public override string ussName
		{
			[Token(Token = "0x6001BCD")]
			[Address(RVA = "0x30EB0B0", Offset = "0x30E96B0", VA = "0x1830EB0B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007DE")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BCE")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BCF")]
		[Address(RVA = "0x30EAF70", Offset = "0x30E9570", VA = "0x1830EAF70", Slot = "14")]
		public override Color GetValue(ref ResolvedStyleAccess container)
		{
			return default(Color);
		}

		[Token(Token = "0x6001BD0")]
		[Address(RVA = "0x30EB040", Offset = "0x30E9640", VA = "0x1830EB040", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Color value)
		{
		}

		[Token(Token = "0x6001BD1")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		public BorderRightColorProperty()
		{
		}
	}

	[Token(Token = "0x200039A")]
	private class BorderRightWidthProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007DF")]
		public override string Name
		{
			[Token(Token = "0x6001BD2")]
			[Address(RVA = "0x30EB170", Offset = "0x30E9770", VA = "0x1830EB170", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007E0")]
		public override string ussName
		{
			[Token(Token = "0x6001BD3")]
			[Address(RVA = "0x30EB1A0", Offset = "0x30E97A0", VA = "0x1830EB1A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007E1")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BD4")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BD5")]
		[Address(RVA = "0x30EB0E0", Offset = "0x30E96E0", VA = "0x1830EB0E0", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BD6")]
		[Address(RVA = "0x30EB130", Offset = "0x30E9730", VA = "0x1830EB130", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BD7")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BorderRightWidthProperty()
		{
		}
	}

	[Token(Token = "0x200039B")]
	private class BorderTopColorProperty : ResolvedColorProperty
	{
		[Token(Token = "0x170007E2")]
		public override string Name
		{
			[Token(Token = "0x6001BD8")]
			[Address(RVA = "0x30EB2E0", Offset = "0x30E98E0", VA = "0x1830EB2E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007E3")]
		public override string ussName
		{
			[Token(Token = "0x6001BD9")]
			[Address(RVA = "0x30EB310", Offset = "0x30E9910", VA = "0x1830EB310", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007E4")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BDA")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BDB")]
		[Address(RVA = "0x30EB1D0", Offset = "0x30E97D0", VA = "0x1830EB1D0", Slot = "14")]
		public override Color GetValue(ref ResolvedStyleAccess container)
		{
			return default(Color);
		}

		[Token(Token = "0x6001BDC")]
		[Address(RVA = "0x30EB2A0", Offset = "0x30E98A0", VA = "0x1830EB2A0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Color value)
		{
		}

		[Token(Token = "0x6001BDD")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		public BorderTopColorProperty()
		{
		}
	}

	[Token(Token = "0x200039C")]
	private class BorderTopLeftRadiusProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007E5")]
		public override string Name
		{
			[Token(Token = "0x6001BDE")]
			[Address(RVA = "0x30EB3D0", Offset = "0x30E99D0", VA = "0x1830EB3D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007E6")]
		public override string ussName
		{
			[Token(Token = "0x6001BDF")]
			[Address(RVA = "0x30EB400", Offset = "0x30E9A00", VA = "0x1830EB400", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007E7")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BE0")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BE1")]
		[Address(RVA = "0x30EB340", Offset = "0x30E9940", VA = "0x1830EB340", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BE2")]
		[Address(RVA = "0x30EB390", Offset = "0x30E9990", VA = "0x1830EB390", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BE3")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BorderTopLeftRadiusProperty()
		{
		}
	}

	[Token(Token = "0x200039D")]
	private class BorderTopRightRadiusProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007E8")]
		public override string Name
		{
			[Token(Token = "0x6001BE4")]
			[Address(RVA = "0x30EB4C0", Offset = "0x30E9AC0", VA = "0x1830EB4C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007E9")]
		public override string ussName
		{
			[Token(Token = "0x6001BE5")]
			[Address(RVA = "0x30EB4F0", Offset = "0x30E9AF0", VA = "0x1830EB4F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007EA")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BE6")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BE7")]
		[Address(RVA = "0x30EB430", Offset = "0x30E9A30", VA = "0x1830EB430", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BE8")]
		[Address(RVA = "0x30EB480", Offset = "0x30E9A80", VA = "0x1830EB480", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BE9")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BorderTopRightRadiusProperty()
		{
		}
	}

	[Token(Token = "0x200039E")]
	private class BorderTopWidthProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007EB")]
		public override string Name
		{
			[Token(Token = "0x6001BEA")]
			[Address(RVA = "0x30EB5B0", Offset = "0x30E9BB0", VA = "0x1830EB5B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007EC")]
		public override string ussName
		{
			[Token(Token = "0x6001BEB")]
			[Address(RVA = "0x30EB5E0", Offset = "0x30E9BE0", VA = "0x1830EB5E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007ED")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BEC")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BED")]
		[Address(RVA = "0x30EB520", Offset = "0x30E9B20", VA = "0x1830EB520", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BEE")]
		[Address(RVA = "0x30EB570", Offset = "0x30E9B70", VA = "0x1830EB570", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BEF")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BorderTopWidthProperty()
		{
		}
	}

	[Token(Token = "0x200039F")]
	private class BottomProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170007EE")]
		public override string Name
		{
			[Token(Token = "0x6001BF0")]
			[Address(RVA = "0x30EB6A0", Offset = "0x30E9CA0", VA = "0x1830EB6A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007EF")]
		public override string ussName
		{
			[Token(Token = "0x6001BF1")]
			[Address(RVA = "0x30EB6D0", Offset = "0x30E9CD0", VA = "0x1830EB6D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F0")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BF2")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BF3")]
		[Address(RVA = "0x30EB610", Offset = "0x30E9C10", VA = "0x1830EB610", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001BF4")]
		[Address(RVA = "0x30EB660", Offset = "0x30E9C60", VA = "0x1830EB660", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001BF5")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public BottomProperty()
		{
		}
	}

	[Token(Token = "0x20003A0")]
	private class ColorProperty : ResolvedColorProperty
	{
		[Token(Token = "0x170007F1")]
		public override string Name
		{
			[Token(Token = "0x6001BF6")]
			[Address(RVA = "0x30EB810", Offset = "0x30E9E10", VA = "0x1830EB810", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F2")]
		public override string ussName
		{
			[Token(Token = "0x6001BF7")]
			[Address(RVA = "0x30EB840", Offset = "0x30E9E40", VA = "0x1830EB840", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F3")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BF8")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BF9")]
		[Address(RVA = "0x30EB700", Offset = "0x30E9D00", VA = "0x1830EB700", Slot = "14")]
		public override Color GetValue(ref ResolvedStyleAccess container)
		{
			return default(Color);
		}

		[Token(Token = "0x6001BFA")]
		[Address(RVA = "0x30EB7D0", Offset = "0x30E9DD0", VA = "0x1830EB7D0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Color value)
		{
		}

		[Token(Token = "0x6001BFB")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		public ColorProperty()
		{
		}
	}

	[Token(Token = "0x20003A1")]
	private class DisplayProperty : ResolvedEnumProperty<DisplayStyle>
	{
		[Token(Token = "0x170007F4")]
		public override string Name
		{
			[Token(Token = "0x6001BFC")]
			[Address(RVA = "0x30EC260", Offset = "0x30EA860", VA = "0x1830EC260", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F5")]
		public override string ussName
		{
			[Token(Token = "0x6001BFD")]
			[Address(RVA = "0x30EC290", Offset = "0x30EA890", VA = "0x1830EC290", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F6")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001BFE")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001BFF")]
		[Address(RVA = "0x30EC190", Offset = "0x30EA790", VA = "0x1830EC190", Slot = "14")]
		public override DisplayStyle GetValue(ref ResolvedStyleAccess container)
		{
			return default(DisplayStyle);
		}

		[Token(Token = "0x6001C00")]
		[Address(RVA = "0x30EC1E0", Offset = "0x30EA7E0", VA = "0x1830EC1E0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, DisplayStyle value)
		{
		}

		[Token(Token = "0x6001C01")]
		[Address(RVA = "0x30EC220", Offset = "0x30EA820", VA = "0x1830EC220")]
		public DisplayProperty()
		{
		}
	}

	[Token(Token = "0x20003A2")]
	private class FilterProperty : ResolvedListProperty<FilterFunction>
	{
		[Token(Token = "0x170007F7")]
		public override string Name
		{
			[Token(Token = "0x6001C02")]
			[Address(RVA = "0x30EC390", Offset = "0x30EA990", VA = "0x1830EC390", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F8")]
		public override string ussName
		{
			[Token(Token = "0x6001C03")]
			[Address(RVA = "0x30EC3C0", Offset = "0x30EA9C0", VA = "0x1830EC3C0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007F9")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C04")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C05")]
		[Address(RVA = "0x30EC2C0", Offset = "0x30EA8C0", VA = "0x1830EC2C0", Slot = "14")]
		public override IEnumerable<FilterFunction> GetValue(ref ResolvedStyleAccess container)
		{
			return null;
		}

		[Token(Token = "0x6001C06")]
		[Address(RVA = "0x30EC310", Offset = "0x30EA910", VA = "0x1830EC310", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, IEnumerable<FilterFunction> value)
		{
		}

		[Token(Token = "0x6001C07")]
		[Address(RVA = "0x30EC350", Offset = "0x30EA950", VA = "0x1830EC350")]
		public FilterProperty()
		{
		}
	}

	[Token(Token = "0x20003A3")]
	private class FlexBasisProperty : ResolvedStyleFloatProperty
	{
		[Token(Token = "0x170007FA")]
		public override string Name
		{
			[Token(Token = "0x6001C08")]
			[Address(RVA = "0x30EC4C0", Offset = "0x30EAAC0", VA = "0x1830EC4C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007FB")]
		public override string ussName
		{
			[Token(Token = "0x6001C09")]
			[Address(RVA = "0x30EC4F0", Offset = "0x30EAAF0", VA = "0x1830EC4F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007FC")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C0A")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C0B")]
		[Address(RVA = "0x30EC3F0", Offset = "0x30EA9F0", VA = "0x1830EC3F0", Slot = "14")]
		public override StyleFloat GetValue(ref ResolvedStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001C0C")]
		[Address(RVA = "0x30EC440", Offset = "0x30EAA40", VA = "0x1830EC440", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001C0D")]
		[Address(RVA = "0x30EC480", Offset = "0x30EAA80", VA = "0x1830EC480")]
		public FlexBasisProperty()
		{
		}
	}

	[Token(Token = "0x20003A4")]
	private class FlexDirectionProperty : ResolvedEnumProperty<FlexDirection>
	{
		[Token(Token = "0x170007FD")]
		public override string Name
		{
			[Token(Token = "0x6001C0E")]
			[Address(RVA = "0x30EC5F0", Offset = "0x30EABF0", VA = "0x1830EC5F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007FE")]
		public override string ussName
		{
			[Token(Token = "0x6001C0F")]
			[Address(RVA = "0x30EC620", Offset = "0x30EAC20", VA = "0x1830EC620", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170007FF")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C10")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C11")]
		[Address(RVA = "0x30EC520", Offset = "0x30EAB20", VA = "0x1830EC520", Slot = "14")]
		public override FlexDirection GetValue(ref ResolvedStyleAccess container)
		{
			return default(FlexDirection);
		}

		[Token(Token = "0x6001C12")]
		[Address(RVA = "0x30EC570", Offset = "0x30EAB70", VA = "0x1830EC570", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, FlexDirection value)
		{
		}

		[Token(Token = "0x6001C13")]
		[Address(RVA = "0x30EC5B0", Offset = "0x30EABB0", VA = "0x1830EC5B0")]
		public FlexDirectionProperty()
		{
		}
	}

	[Token(Token = "0x20003A5")]
	private class FlexGrowProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000800")]
		public override string Name
		{
			[Token(Token = "0x6001C14")]
			[Address(RVA = "0x30EC6E0", Offset = "0x30EACE0", VA = "0x1830EC6E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000801")]
		public override string ussName
		{
			[Token(Token = "0x6001C15")]
			[Address(RVA = "0x30EC710", Offset = "0x30EAD10", VA = "0x1830EC710", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000802")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C16")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C17")]
		[Address(RVA = "0x30EC650", Offset = "0x30EAC50", VA = "0x1830EC650", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C18")]
		[Address(RVA = "0x30EC6A0", Offset = "0x30EACA0", VA = "0x1830EC6A0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C19")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public FlexGrowProperty()
		{
		}
	}

	[Token(Token = "0x20003A6")]
	private class FlexShrinkProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000803")]
		public override string Name
		{
			[Token(Token = "0x6001C1A")]
			[Address(RVA = "0x30EC7D0", Offset = "0x30EADD0", VA = "0x1830EC7D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000804")]
		public override string ussName
		{
			[Token(Token = "0x6001C1B")]
			[Address(RVA = "0x30EC800", Offset = "0x30EAE00", VA = "0x1830EC800", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000805")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C1C")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C1D")]
		[Address(RVA = "0x30EC740", Offset = "0x30EAD40", VA = "0x1830EC740", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C1E")]
		[Address(RVA = "0x30EC790", Offset = "0x30EAD90", VA = "0x1830EC790", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C1F")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public FlexShrinkProperty()
		{
		}
	}

	[Token(Token = "0x20003A7")]
	private class FlexWrapProperty : ResolvedEnumProperty<Wrap>
	{
		[Token(Token = "0x17000806")]
		public override string Name
		{
			[Token(Token = "0x6001C20")]
			[Address(RVA = "0x30EC900", Offset = "0x30EAF00", VA = "0x1830EC900", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000807")]
		public override string ussName
		{
			[Token(Token = "0x6001C21")]
			[Address(RVA = "0x30EC930", Offset = "0x30EAF30", VA = "0x1830EC930", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000808")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C22")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C23")]
		[Address(RVA = "0x30EC830", Offset = "0x30EAE30", VA = "0x1830EC830", Slot = "14")]
		public override Wrap GetValue(ref ResolvedStyleAccess container)
		{
			return default(Wrap);
		}

		[Token(Token = "0x6001C24")]
		[Address(RVA = "0x30EC880", Offset = "0x30EAE80", VA = "0x1830EC880", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Wrap value)
		{
		}

		[Token(Token = "0x6001C25")]
		[Address(RVA = "0x30EC8C0", Offset = "0x30EAEC0", VA = "0x1830EC8C0")]
		public FlexWrapProperty()
		{
		}
	}

	[Token(Token = "0x20003A8")]
	private class FontSizeProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000809")]
		public override string Name
		{
			[Token(Token = "0x6001C26")]
			[Address(RVA = "0x30EC9F0", Offset = "0x30EAFF0", VA = "0x1830EC9F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700080A")]
		public override string ussName
		{
			[Token(Token = "0x6001C27")]
			[Address(RVA = "0x30ECA20", Offset = "0x30EB020", VA = "0x1830ECA20", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700080B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C28")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C29")]
		[Address(RVA = "0x30EC960", Offset = "0x30EAF60", VA = "0x1830EC960", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C2A")]
		[Address(RVA = "0x30EC9B0", Offset = "0x30EAFB0", VA = "0x1830EC9B0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C2B")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public FontSizeProperty()
		{
		}
	}

	[Token(Token = "0x20003A9")]
	private class HeightProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x1700080C")]
		public override string Name
		{
			[Token(Token = "0x6001C2C")]
			[Address(RVA = "0x30ECAE0", Offset = "0x30EB0E0", VA = "0x1830ECAE0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700080D")]
		public override string ussName
		{
			[Token(Token = "0x6001C2D")]
			[Address(RVA = "0x30ECB10", Offset = "0x30EB110", VA = "0x1830ECB10", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700080E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C2E")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C2F")]
		[Address(RVA = "0x30ECA50", Offset = "0x30EB050", VA = "0x1830ECA50", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C30")]
		[Address(RVA = "0x30ECAA0", Offset = "0x30EB0A0", VA = "0x1830ECAA0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C31")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public HeightProperty()
		{
		}
	}

	[Token(Token = "0x20003AA")]
	private class JustifyContentProperty : ResolvedEnumProperty<Justify>
	{
		[Token(Token = "0x1700080F")]
		public override string Name
		{
			[Token(Token = "0x6001C32")]
			[Address(RVA = "0x30EF160", Offset = "0x30ED760", VA = "0x1830EF160", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000810")]
		public override string ussName
		{
			[Token(Token = "0x6001C33")]
			[Address(RVA = "0x30EF190", Offset = "0x30ED790", VA = "0x1830EF190", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000811")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C34")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C35")]
		[Address(RVA = "0x30EF090", Offset = "0x30ED690", VA = "0x1830EF090", Slot = "14")]
		public override Justify GetValue(ref ResolvedStyleAccess container)
		{
			return default(Justify);
		}

		[Token(Token = "0x6001C36")]
		[Address(RVA = "0x30EF0E0", Offset = "0x30ED6E0", VA = "0x1830EF0E0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Justify value)
		{
		}

		[Token(Token = "0x6001C37")]
		[Address(RVA = "0x30EF120", Offset = "0x30ED720", VA = "0x1830EF120")]
		public JustifyContentProperty()
		{
		}
	}

	[Token(Token = "0x20003AB")]
	private class LeftProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000812")]
		public override string Name
		{
			[Token(Token = "0x6001C38")]
			[Address(RVA = "0x30F1320", Offset = "0x30EF920", VA = "0x1830F1320", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000813")]
		public override string ussName
		{
			[Token(Token = "0x6001C39")]
			[Address(RVA = "0x30F1350", Offset = "0x30EF950", VA = "0x1830F1350", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000814")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C3A")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C3B")]
		[Address(RVA = "0x30F1290", Offset = "0x30EF890", VA = "0x1830F1290", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C3C")]
		[Address(RVA = "0x30F12E0", Offset = "0x30EF8E0", VA = "0x1830F12E0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C3D")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public LeftProperty()
		{
		}
	}

	[Token(Token = "0x20003AC")]
	private class LetterSpacingProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000815")]
		public override string Name
		{
			[Token(Token = "0x6001C3E")]
			[Address(RVA = "0x30F1410", Offset = "0x30EFA10", VA = "0x1830F1410", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000816")]
		public override string ussName
		{
			[Token(Token = "0x6001C3F")]
			[Address(RVA = "0x30F1440", Offset = "0x30EFA40", VA = "0x1830F1440", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000817")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C40")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C41")]
		[Address(RVA = "0x30F1380", Offset = "0x30EF980", VA = "0x1830F1380", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C42")]
		[Address(RVA = "0x30F13D0", Offset = "0x30EF9D0", VA = "0x1830F13D0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C43")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public LetterSpacingProperty()
		{
		}
	}

	[Token(Token = "0x20003AD")]
	private class MarginBottomProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000818")]
		public override string Name
		{
			[Token(Token = "0x6001C44")]
			[Address(RVA = "0x30F1500", Offset = "0x30EFB00", VA = "0x1830F1500", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000819")]
		public override string ussName
		{
			[Token(Token = "0x6001C45")]
			[Address(RVA = "0x30F1530", Offset = "0x30EFB30", VA = "0x1830F1530", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700081A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C46")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C47")]
		[Address(RVA = "0x30F1470", Offset = "0x30EFA70", VA = "0x1830F1470", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C48")]
		[Address(RVA = "0x30F14C0", Offset = "0x30EFAC0", VA = "0x1830F14C0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C49")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public MarginBottomProperty()
		{
		}
	}

	[Token(Token = "0x20003AE")]
	private class MarginLeftProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x1700081B")]
		public override string Name
		{
			[Token(Token = "0x6001C4A")]
			[Address(RVA = "0x30F15F0", Offset = "0x30EFBF0", VA = "0x1830F15F0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700081C")]
		public override string ussName
		{
			[Token(Token = "0x6001C4B")]
			[Address(RVA = "0x30F1620", Offset = "0x30EFC20", VA = "0x1830F1620", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700081D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C4C")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C4D")]
		[Address(RVA = "0x30F1560", Offset = "0x30EFB60", VA = "0x1830F1560", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C4E")]
		[Address(RVA = "0x30F15B0", Offset = "0x30EFBB0", VA = "0x1830F15B0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C4F")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public MarginLeftProperty()
		{
		}
	}

	[Token(Token = "0x20003AF")]
	private class MarginRightProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x1700081E")]
		public override string Name
		{
			[Token(Token = "0x6001C50")]
			[Address(RVA = "0x30F16E0", Offset = "0x30EFCE0", VA = "0x1830F16E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700081F")]
		public override string ussName
		{
			[Token(Token = "0x6001C51")]
			[Address(RVA = "0x30F1710", Offset = "0x30EFD10", VA = "0x1830F1710", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000820")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C52")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C53")]
		[Address(RVA = "0x30F1650", Offset = "0x30EFC50", VA = "0x1830F1650", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C54")]
		[Address(RVA = "0x30F16A0", Offset = "0x30EFCA0", VA = "0x1830F16A0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C55")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public MarginRightProperty()
		{
		}
	}

	[Token(Token = "0x20003B0")]
	private class MarginTopProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000821")]
		public override string Name
		{
			[Token(Token = "0x6001C56")]
			[Address(RVA = "0x30F17D0", Offset = "0x30EFDD0", VA = "0x1830F17D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000822")]
		public override string ussName
		{
			[Token(Token = "0x6001C57")]
			[Address(RVA = "0x30F1800", Offset = "0x30EFE00", VA = "0x1830F1800", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000823")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C58")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C59")]
		[Address(RVA = "0x30F1740", Offset = "0x30EFD40", VA = "0x1830F1740", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C5A")]
		[Address(RVA = "0x30F1790", Offset = "0x30EFD90", VA = "0x1830F1790", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C5B")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public MarginTopProperty()
		{
		}
	}

	[Token(Token = "0x20003B1")]
	private class MaxHeightProperty : ResolvedStyleFloatProperty
	{
		[Token(Token = "0x17000824")]
		public override string Name
		{
			[Token(Token = "0x6001C5C")]
			[Address(RVA = "0x30F18C0", Offset = "0x30EFEC0", VA = "0x1830F18C0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000825")]
		public override string ussName
		{
			[Token(Token = "0x6001C5D")]
			[Address(RVA = "0x30F18F0", Offset = "0x30EFEF0", VA = "0x1830F18F0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000826")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C5E")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C5F")]
		[Address(RVA = "0x30F1830", Offset = "0x30EFE30", VA = "0x1830F1830", Slot = "14")]
		public override StyleFloat GetValue(ref ResolvedStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001C60")]
		[Address(RVA = "0x30F1880", Offset = "0x30EFE80", VA = "0x1830F1880", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001C61")]
		[Address(RVA = "0x30EC480", Offset = "0x30EAA80", VA = "0x1830EC480")]
		public MaxHeightProperty()
		{
		}
	}

	[Token(Token = "0x20003B2")]
	private class MaxWidthProperty : ResolvedStyleFloatProperty
	{
		[Token(Token = "0x17000827")]
		public override string Name
		{
			[Token(Token = "0x6001C62")]
			[Address(RVA = "0x30F19B0", Offset = "0x30EFFB0", VA = "0x1830F19B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000828")]
		public override string ussName
		{
			[Token(Token = "0x6001C63")]
			[Address(RVA = "0x30F19E0", Offset = "0x30EFFE0", VA = "0x1830F19E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000829")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C64")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C65")]
		[Address(RVA = "0x30F1920", Offset = "0x30EFF20", VA = "0x1830F1920", Slot = "14")]
		public override StyleFloat GetValue(ref ResolvedStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001C66")]
		[Address(RVA = "0x30F1970", Offset = "0x30EFF70", VA = "0x1830F1970", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001C67")]
		[Address(RVA = "0x30EC480", Offset = "0x30EAA80", VA = "0x1830EC480")]
		public MaxWidthProperty()
		{
		}
	}

	[Token(Token = "0x20003B3")]
	private class MinHeightProperty : ResolvedStyleFloatProperty
	{
		[Token(Token = "0x1700082A")]
		public override string Name
		{
			[Token(Token = "0x6001C68")]
			[Address(RVA = "0x30F1AA0", Offset = "0x30F00A0", VA = "0x1830F1AA0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700082B")]
		public override string ussName
		{
			[Token(Token = "0x6001C69")]
			[Address(RVA = "0x30F1AD0", Offset = "0x30F00D0", VA = "0x1830F1AD0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700082C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C6A")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C6B")]
		[Address(RVA = "0x30F1A10", Offset = "0x30F0010", VA = "0x1830F1A10", Slot = "14")]
		public override StyleFloat GetValue(ref ResolvedStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001C6C")]
		[Address(RVA = "0x30F1A60", Offset = "0x30F0060", VA = "0x1830F1A60", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001C6D")]
		[Address(RVA = "0x30EC480", Offset = "0x30EAA80", VA = "0x1830EC480")]
		public MinHeightProperty()
		{
		}
	}

	[Token(Token = "0x20003B4")]
	private class MinWidthProperty : ResolvedStyleFloatProperty
	{
		[Token(Token = "0x1700082D")]
		public override string Name
		{
			[Token(Token = "0x6001C6E")]
			[Address(RVA = "0x30F1B90", Offset = "0x30F0190", VA = "0x1830F1B90", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700082E")]
		public override string ussName
		{
			[Token(Token = "0x6001C6F")]
			[Address(RVA = "0x30F1BC0", Offset = "0x30F01C0", VA = "0x1830F1BC0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700082F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C70")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C71")]
		[Address(RVA = "0x30F1B00", Offset = "0x30F0100", VA = "0x1830F1B00", Slot = "14")]
		public override StyleFloat GetValue(ref ResolvedStyleAccess container)
		{
			return default(StyleFloat);
		}

		[Token(Token = "0x6001C72")]
		[Address(RVA = "0x30F1B50", Offset = "0x30F0150", VA = "0x1830F1B50", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, StyleFloat value)
		{
		}

		[Token(Token = "0x6001C73")]
		[Address(RVA = "0x30EC480", Offset = "0x30EAA80", VA = "0x1830EC480")]
		public MinWidthProperty()
		{
		}
	}

	[Token(Token = "0x20003B5")]
	private class OpacityProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000830")]
		public override string Name
		{
			[Token(Token = "0x6001C74")]
			[Address(RVA = "0x30F1C80", Offset = "0x30F0280", VA = "0x1830F1C80", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000831")]
		public override string ussName
		{
			[Token(Token = "0x6001C75")]
			[Address(RVA = "0x30F1CB0", Offset = "0x30F02B0", VA = "0x1830F1CB0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000832")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C76")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C77")]
		[Address(RVA = "0x30F1BF0", Offset = "0x30F01F0", VA = "0x1830F1BF0", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C78")]
		[Address(RVA = "0x30F1C40", Offset = "0x30F0240", VA = "0x1830F1C40", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C79")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public OpacityProperty()
		{
		}
	}

	[Token(Token = "0x20003B6")]
	private class PaddingBottomProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000833")]
		public override string Name
		{
			[Token(Token = "0x6001C7A")]
			[Address(RVA = "0x30F1D70", Offset = "0x30F0370", VA = "0x1830F1D70", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000834")]
		public override string ussName
		{
			[Token(Token = "0x6001C7B")]
			[Address(RVA = "0x30F1DA0", Offset = "0x30F03A0", VA = "0x1830F1DA0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000835")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C7C")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C7D")]
		[Address(RVA = "0x30F1CE0", Offset = "0x30F02E0", VA = "0x1830F1CE0", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C7E")]
		[Address(RVA = "0x30F1D30", Offset = "0x30F0330", VA = "0x1830F1D30", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C7F")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public PaddingBottomProperty()
		{
		}
	}

	[Token(Token = "0x20003B7")]
	private class PaddingLeftProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000836")]
		public override string Name
		{
			[Token(Token = "0x6001C80")]
			[Address(RVA = "0x30F1E60", Offset = "0x30F0460", VA = "0x1830F1E60", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000837")]
		public override string ussName
		{
			[Token(Token = "0x6001C81")]
			[Address(RVA = "0x30F1E90", Offset = "0x30F0490", VA = "0x1830F1E90", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000838")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C82")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C83")]
		[Address(RVA = "0x30F1DD0", Offset = "0x30F03D0", VA = "0x1830F1DD0", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C84")]
		[Address(RVA = "0x30F1E20", Offset = "0x30F0420", VA = "0x1830F1E20", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C85")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public PaddingLeftProperty()
		{
		}
	}

	[Token(Token = "0x20003B8")]
	private class PaddingRightProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000839")]
		public override string Name
		{
			[Token(Token = "0x6001C86")]
			[Address(RVA = "0x30F1F50", Offset = "0x30F0550", VA = "0x1830F1F50", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700083A")]
		public override string ussName
		{
			[Token(Token = "0x6001C87")]
			[Address(RVA = "0x30F1F80", Offset = "0x30F0580", VA = "0x1830F1F80", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700083B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C88")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C89")]
		[Address(RVA = "0x30F1EC0", Offset = "0x30F04C0", VA = "0x1830F1EC0", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C8A")]
		[Address(RVA = "0x30F1F10", Offset = "0x30F0510", VA = "0x1830F1F10", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C8B")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public PaddingRightProperty()
		{
		}
	}

	[Token(Token = "0x20003B9")]
	private class PaddingTopProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x1700083C")]
		public override string Name
		{
			[Token(Token = "0x6001C8C")]
			[Address(RVA = "0x30F2040", Offset = "0x30F0640", VA = "0x1830F2040", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700083D")]
		public override string ussName
		{
			[Token(Token = "0x6001C8D")]
			[Address(RVA = "0x30F2070", Offset = "0x30F0670", VA = "0x1830F2070", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700083E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C8E")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C8F")]
		[Address(RVA = "0x30F1FB0", Offset = "0x30F05B0", VA = "0x1830F1FB0", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C90")]
		[Address(RVA = "0x30F2000", Offset = "0x30F0600", VA = "0x1830F2000", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C91")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public PaddingTopProperty()
		{
		}
	}

	[Token(Token = "0x20003BA")]
	private class PositionProperty : ResolvedEnumProperty<Position>
	{
		[Token(Token = "0x1700083F")]
		public override string Name
		{
			[Token(Token = "0x6001C92")]
			[Address(RVA = "0x30F2170", Offset = "0x30F0770", VA = "0x1830F2170", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000840")]
		public override string ussName
		{
			[Token(Token = "0x6001C93")]
			[Address(RVA = "0x30F21A0", Offset = "0x30F07A0", VA = "0x1830F21A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000841")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C94")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C95")]
		[Address(RVA = "0x30F20A0", Offset = "0x30F06A0", VA = "0x1830F20A0", Slot = "14")]
		public override Position GetValue(ref ResolvedStyleAccess container)
		{
			return default(Position);
		}

		[Token(Token = "0x6001C96")]
		[Address(RVA = "0x30F20F0", Offset = "0x30F06F0", VA = "0x1830F20F0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Position value)
		{
		}

		[Token(Token = "0x6001C97")]
		[Address(RVA = "0x30F2130", Offset = "0x30F0730", VA = "0x1830F2130")]
		public PositionProperty()
		{
		}
	}

	[Token(Token = "0x20003BB")]
	private class RightProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000842")]
		public override string Name
		{
			[Token(Token = "0x6001C98")]
			[Address(RVA = "0x30F5E50", Offset = "0x30F4450", VA = "0x1830F5E50", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000843")]
		public override string ussName
		{
			[Token(Token = "0x6001C99")]
			[Address(RVA = "0x30F5E80", Offset = "0x30F4480", VA = "0x1830F5E80", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000844")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001C9A")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001C9B")]
		[Address(RVA = "0x30F5DC0", Offset = "0x30F43C0", VA = "0x1830F5DC0", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001C9C")]
		[Address(RVA = "0x30F5E10", Offset = "0x30F4410", VA = "0x1830F5E10", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001C9D")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public RightProperty()
		{
		}
	}

	[Token(Token = "0x20003BC")]
	private class RotateProperty : ResolvedRotateProperty
	{
		[Token(Token = "0x17000845")]
		public override string Name
		{
			[Token(Token = "0x6001C9E")]
			[Address(RVA = "0x30F5FD0", Offset = "0x30F45D0", VA = "0x1830F5FD0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000846")]
		public override string ussName
		{
			[Token(Token = "0x6001C9F")]
			[Address(RVA = "0x30F6000", Offset = "0x30F4600", VA = "0x1830F6000", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000847")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CA0")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CA1")]
		[Address(RVA = "0x30F5EB0", Offset = "0x30F44B0", VA = "0x1830F5EB0", Slot = "14")]
		public override Rotate GetValue(ref ResolvedStyleAccess container)
		{
			return default(Rotate);
		}

		[Token(Token = "0x6001CA2")]
		[Address(RVA = "0x30F5F90", Offset = "0x30F4590", VA = "0x1830F5F90", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Rotate value)
		{
		}

		[Token(Token = "0x6001CA3")]
		[Address(RVA = "0x30F2810", Offset = "0x30F0E10", VA = "0x1830F2810")]
		public RotateProperty()
		{
		}
	}

	[Token(Token = "0x20003BD")]
	private class ScaleProperty : ResolvedScaleProperty
	{
		[Token(Token = "0x17000848")]
		public override string Name
		{
			[Token(Token = "0x6001CA4")]
			[Address(RVA = "0x30F6140", Offset = "0x30F4740", VA = "0x1830F6140", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000849")]
		public override string ussName
		{
			[Token(Token = "0x6001CA5")]
			[Address(RVA = "0x30F6170", Offset = "0x30F4770", VA = "0x1830F6170", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700084A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CA6")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CA7")]
		[Address(RVA = "0x30F6030", Offset = "0x30F4630", VA = "0x1830F6030", Slot = "14")]
		public override Scale GetValue(ref ResolvedStyleAccess container)
		{
			return default(Scale);
		}

		[Token(Token = "0x6001CA8")]
		[Address(RVA = "0x30F6100", Offset = "0x30F4700", VA = "0x1830F6100", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Scale value)
		{
		}

		[Token(Token = "0x6001CA9")]
		[Address(RVA = "0x30F2850", Offset = "0x30F0E50", VA = "0x1830F2850")]
		public ScaleProperty()
		{
		}
	}

	[Token(Token = "0x20003BE")]
	private class TextOverflowProperty : ResolvedEnumProperty<TextOverflow>
	{
		[Token(Token = "0x1700084B")]
		public override string Name
		{
			[Token(Token = "0x6001CAA")]
			[Address(RVA = "0x30F6300", Offset = "0x30F4900", VA = "0x1830F6300", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700084C")]
		public override string ussName
		{
			[Token(Token = "0x6001CAB")]
			[Address(RVA = "0x30F6330", Offset = "0x30F4930", VA = "0x1830F6330", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700084D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CAC")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CAD")]
		[Address(RVA = "0x30F6230", Offset = "0x30F4830", VA = "0x1830F6230", Slot = "14")]
		public override TextOverflow GetValue(ref ResolvedStyleAccess container)
		{
			return default(TextOverflow);
		}

		[Token(Token = "0x6001CAE")]
		[Address(RVA = "0x30F6280", Offset = "0x30F4880", VA = "0x1830F6280", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, TextOverflow value)
		{
		}

		[Token(Token = "0x6001CAF")]
		[Address(RVA = "0x30F62C0", Offset = "0x30F48C0", VA = "0x1830F62C0")]
		public TextOverflowProperty()
		{
		}
	}

	[Token(Token = "0x20003BF")]
	private class TopProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x1700084E")]
		public override string Name
		{
			[Token(Token = "0x6001CB0")]
			[Address(RVA = "0x30F6490", Offset = "0x30F4A90", VA = "0x1830F6490", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700084F")]
		public override string ussName
		{
			[Token(Token = "0x6001CB1")]
			[Address(RVA = "0x30F64C0", Offset = "0x30F4AC0", VA = "0x1830F64C0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000850")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CB2")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CB3")]
		[Address(RVA = "0x30F6400", Offset = "0x30F4A00", VA = "0x1830F6400", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001CB4")]
		[Address(RVA = "0x30F6450", Offset = "0x30F4A50", VA = "0x1830F6450", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001CB5")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public TopProperty()
		{
		}
	}

	[Token(Token = "0x20003C0")]
	private class TransformOriginProperty : ResolvedVector3Property
	{
		[Token(Token = "0x17000851")]
		public override string Name
		{
			[Token(Token = "0x6001CB6")]
			[Address(RVA = "0x30F6B50", Offset = "0x30F5150", VA = "0x1830F6B50", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000852")]
		public override string ussName
		{
			[Token(Token = "0x6001CB7")]
			[Address(RVA = "0x30F6B80", Offset = "0x30F5180", VA = "0x1830F6B80", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000853")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CB8")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CB9")]
		[Address(RVA = "0x30F6A30", Offset = "0x30F5030", VA = "0x1830F6A30", Slot = "14")]
		public override Vector3 GetValue(ref ResolvedStyleAccess container)
		{
			return default(Vector3);
		}

		[Token(Token = "0x6001CBA")]
		[Address(RVA = "0x30F6B10", Offset = "0x30F5110", VA = "0x1830F6B10", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Vector3 value)
		{
		}

		[Token(Token = "0x6001CBB")]
		[Address(RVA = "0x30F5D80", Offset = "0x30F4380", VA = "0x1830F5D80")]
		public TransformOriginProperty()
		{
		}
	}

	[Token(Token = "0x20003C1")]
	private class TransitionDelayProperty : ResolvedListProperty<TimeValue>
	{
		[Token(Token = "0x17000854")]
		public override string Name
		{
			[Token(Token = "0x6001CBC")]
			[Address(RVA = "0x30F7170", Offset = "0x30F5770", VA = "0x1830F7170", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000855")]
		public override string ussName
		{
			[Token(Token = "0x6001CBD")]
			[Address(RVA = "0x30F71A0", Offset = "0x30F57A0", VA = "0x1830F71A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000856")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CBE")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CBF")]
		[Address(RVA = "0x30F70A0", Offset = "0x30F56A0", VA = "0x1830F70A0", Slot = "14")]
		public override IEnumerable<TimeValue> GetValue(ref ResolvedStyleAccess container)
		{
			return null;
		}

		[Token(Token = "0x6001CC0")]
		[Address(RVA = "0x30F70F0", Offset = "0x30F56F0", VA = "0x1830F70F0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, IEnumerable<TimeValue> value)
		{
		}

		[Token(Token = "0x6001CC1")]
		[Address(RVA = "0x30F7130", Offset = "0x30F5730", VA = "0x1830F7130")]
		public TransitionDelayProperty()
		{
		}
	}

	[Token(Token = "0x20003C2")]
	private class TransitionDurationProperty : ResolvedListProperty<TimeValue>
	{
		[Token(Token = "0x17000857")]
		public override string Name
		{
			[Token(Token = "0x6001CC2")]
			[Address(RVA = "0x30F72A0", Offset = "0x30F58A0", VA = "0x1830F72A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000858")]
		public override string ussName
		{
			[Token(Token = "0x6001CC3")]
			[Address(RVA = "0x30F72D0", Offset = "0x30F58D0", VA = "0x1830F72D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000859")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CC4")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CC5")]
		[Address(RVA = "0x30F71D0", Offset = "0x30F57D0", VA = "0x1830F71D0", Slot = "14")]
		public override IEnumerable<TimeValue> GetValue(ref ResolvedStyleAccess container)
		{
			return null;
		}

		[Token(Token = "0x6001CC6")]
		[Address(RVA = "0x30F7220", Offset = "0x30F5820", VA = "0x1830F7220", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, IEnumerable<TimeValue> value)
		{
		}

		[Token(Token = "0x6001CC7")]
		[Address(RVA = "0x30F7260", Offset = "0x30F5860", VA = "0x1830F7260")]
		public TransitionDurationProperty()
		{
		}
	}

	[Token(Token = "0x20003C3")]
	private class TransitionPropertyProperty : ResolvedListProperty<StylePropertyName>
	{
		[Token(Token = "0x1700085A")]
		public override string Name
		{
			[Token(Token = "0x6001CC8")]
			[Address(RVA = "0x30F73D0", Offset = "0x30F59D0", VA = "0x1830F73D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700085B")]
		public override string ussName
		{
			[Token(Token = "0x6001CC9")]
			[Address(RVA = "0x30F7400", Offset = "0x30F5A00", VA = "0x1830F7400", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700085C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CCA")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CCB")]
		[Address(RVA = "0x30F7300", Offset = "0x30F5900", VA = "0x1830F7300", Slot = "14")]
		public override IEnumerable<StylePropertyName> GetValue(ref ResolvedStyleAccess container)
		{
			return null;
		}

		[Token(Token = "0x6001CCC")]
		[Address(RVA = "0x30F7350", Offset = "0x30F5950", VA = "0x1830F7350", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, IEnumerable<StylePropertyName> value)
		{
		}

		[Token(Token = "0x6001CCD")]
		[Address(RVA = "0x30F7390", Offset = "0x30F5990", VA = "0x1830F7390")]
		public TransitionPropertyProperty()
		{
		}
	}

	[Token(Token = "0x20003C4")]
	private class TransitionTimingFunctionProperty : ResolvedListProperty<EasingFunction>
	{
		[Token(Token = "0x1700085D")]
		public override string Name
		{
			[Token(Token = "0x6001CCE")]
			[Address(RVA = "0x30F7500", Offset = "0x30F5B00", VA = "0x1830F7500", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700085E")]
		public override string ussName
		{
			[Token(Token = "0x6001CCF")]
			[Address(RVA = "0x30F7530", Offset = "0x30F5B30", VA = "0x1830F7530", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700085F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CD0")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CD1")]
		[Address(RVA = "0x30F7430", Offset = "0x30F5A30", VA = "0x1830F7430", Slot = "14")]
		public override IEnumerable<EasingFunction> GetValue(ref ResolvedStyleAccess container)
		{
			return null;
		}

		[Token(Token = "0x6001CD2")]
		[Address(RVA = "0x30F7480", Offset = "0x30F5A80", VA = "0x1830F7480", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, IEnumerable<EasingFunction> value)
		{
		}

		[Token(Token = "0x6001CD3")]
		[Address(RVA = "0x30F74C0", Offset = "0x30F5AC0", VA = "0x1830F74C0")]
		public TransitionTimingFunctionProperty()
		{
		}
	}

	[Token(Token = "0x20003C5")]
	private class TranslateProperty : ResolvedVector3Property
	{
		[Token(Token = "0x17000860")]
		public override string Name
		{
			[Token(Token = "0x6001CD4")]
			[Address(RVA = "0x30F7680", Offset = "0x30F5C80", VA = "0x1830F7680", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000861")]
		public override string ussName
		{
			[Token(Token = "0x6001CD5")]
			[Address(RVA = "0x30F76B0", Offset = "0x30F5CB0", VA = "0x1830F76B0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000862")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CD6")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CD7")]
		[Address(RVA = "0x30F7560", Offset = "0x30F5B60", VA = "0x1830F7560", Slot = "14")]
		public override Vector3 GetValue(ref ResolvedStyleAccess container)
		{
			return default(Vector3);
		}

		[Token(Token = "0x6001CD8")]
		[Address(RVA = "0x30F7640", Offset = "0x30F5C40", VA = "0x1830F7640", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Vector3 value)
		{
		}

		[Token(Token = "0x6001CD9")]
		[Address(RVA = "0x30F5D80", Offset = "0x30F4380", VA = "0x1830F5D80")]
		public TranslateProperty()
		{
		}
	}

	[Token(Token = "0x20003C6")]
	private class UnityBackgroundImageTintColorProperty : ResolvedColorProperty
	{
		[Token(Token = "0x17000863")]
		public override string Name
		{
			[Token(Token = "0x6001CDA")]
			[Address(RVA = "0x310A470", Offset = "0x3108A70", VA = "0x18310A470", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000864")]
		public override string ussName
		{
			[Token(Token = "0x6001CDB")]
			[Address(RVA = "0x310A4A0", Offset = "0x3108AA0", VA = "0x18310A4A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000865")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CDC")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CDD")]
		[Address(RVA = "0x310A360", Offset = "0x3108960", VA = "0x18310A360", Slot = "14")]
		public override Color GetValue(ref ResolvedStyleAccess container)
		{
			return default(Color);
		}

		[Token(Token = "0x6001CDE")]
		[Address(RVA = "0x310A430", Offset = "0x3108A30", VA = "0x18310A430", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Color value)
		{
		}

		[Token(Token = "0x6001CDF")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		public UnityBackgroundImageTintColorProperty()
		{
		}
	}

	[Token(Token = "0x20003C7")]
	private class UnityEditorTextRenderingModeProperty : ResolvedEnumProperty<EditorTextRenderingMode>
	{
		[Token(Token = "0x17000866")]
		public override string Name
		{
			[Token(Token = "0x6001CE0")]
			[Address(RVA = "0x310A5A0", Offset = "0x3108BA0", VA = "0x18310A5A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000867")]
		public override string ussName
		{
			[Token(Token = "0x6001CE1")]
			[Address(RVA = "0x310A5D0", Offset = "0x3108BD0", VA = "0x18310A5D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000868")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CE2")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CE3")]
		[Address(RVA = "0x310A4D0", Offset = "0x3108AD0", VA = "0x18310A4D0", Slot = "14")]
		public override EditorTextRenderingMode GetValue(ref ResolvedStyleAccess container)
		{
			return default(EditorTextRenderingMode);
		}

		[Token(Token = "0x6001CE4")]
		[Address(RVA = "0x310A520", Offset = "0x3108B20", VA = "0x18310A520", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, EditorTextRenderingMode value)
		{
		}

		[Token(Token = "0x6001CE5")]
		[Address(RVA = "0x310A560", Offset = "0x3108B60", VA = "0x18310A560")]
		public UnityEditorTextRenderingModeProperty()
		{
		}
	}

	[Token(Token = "0x20003C8")]
	private class UnityFontProperty : ResolvedFontProperty
	{
		[Token(Token = "0x17000869")]
		public override string Name
		{
			[Token(Token = "0x6001CE6")]
			[Address(RVA = "0x310A870", Offset = "0x3108E70", VA = "0x18310A870", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700086A")]
		public override string ussName
		{
			[Token(Token = "0x6001CE7")]
			[Address(RVA = "0x310A8A0", Offset = "0x3108EA0", VA = "0x18310A8A0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700086B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CE8")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CE9")]
		[Address(RVA = "0x310A770", Offset = "0x3108D70", VA = "0x18310A770", Slot = "14")]
		public override Font GetValue(ref ResolvedStyleAccess container)
		{
			return null;
		}

		[Token(Token = "0x6001CEA")]
		[Address(RVA = "0x310A830", Offset = "0x3108E30", VA = "0x18310A830", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Font value)
		{
		}

		[Token(Token = "0x6001CEB")]
		[Address(RVA = "0x30F2750", Offset = "0x30F0D50", VA = "0x1830F2750")]
		public UnityFontProperty()
		{
		}
	}

	[Token(Token = "0x20003C9")]
	private class UnityFontDefinitionProperty : ResolvedFontDefinitionProperty
	{
		[Token(Token = "0x1700086C")]
		public override string Name
		{
			[Token(Token = "0x6001CEC")]
			[Address(RVA = "0x310A710", Offset = "0x3108D10", VA = "0x18310A710", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700086D")]
		public override string ussName
		{
			[Token(Token = "0x6001CED")]
			[Address(RVA = "0x310A740", Offset = "0x3108D40", VA = "0x18310A740", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700086E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CEE")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CEF")]
		[Address(RVA = "0x310A600", Offset = "0x3108C00", VA = "0x18310A600", Slot = "14")]
		public override FontDefinition GetValue(ref ResolvedStyleAccess container)
		{
			return default(FontDefinition);
		}

		[Token(Token = "0x6001CF0")]
		[Address(RVA = "0x310A6D0", Offset = "0x3108CD0", VA = "0x18310A6D0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, FontDefinition value)
		{
		}

		[Token(Token = "0x6001CF1")]
		[Address(RVA = "0x30F2710", Offset = "0x30F0D10", VA = "0x1830F2710")]
		public UnityFontDefinitionProperty()
		{
		}
	}

	[Token(Token = "0x20003CA")]
	private class UnityFontStyleAndWeightProperty : ResolvedEnumProperty<FontStyle>
	{
		[Token(Token = "0x1700086F")]
		public override string Name
		{
			[Token(Token = "0x6001CF2")]
			[Address(RVA = "0x310A9A0", Offset = "0x3108FA0", VA = "0x18310A9A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000870")]
		public override string ussName
		{
			[Token(Token = "0x6001CF3")]
			[Address(RVA = "0x310A9D0", Offset = "0x3108FD0", VA = "0x18310A9D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000871")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CF4")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CF5")]
		[Address(RVA = "0x310A8D0", Offset = "0x3108ED0", VA = "0x18310A8D0", Slot = "14")]
		public override FontStyle GetValue(ref ResolvedStyleAccess container)
		{
			return default(FontStyle);
		}

		[Token(Token = "0x6001CF6")]
		[Address(RVA = "0x310A920", Offset = "0x3108F20", VA = "0x18310A920", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, FontStyle value)
		{
		}

		[Token(Token = "0x6001CF7")]
		[Address(RVA = "0x310A960", Offset = "0x3108F60", VA = "0x18310A960")]
		public UnityFontStyleAndWeightProperty()
		{
		}
	}

	[Token(Token = "0x20003CB")]
	private class UnityMaterialProperty : ResolvedMaterialDefinitionProperty
	{
		[Token(Token = "0x17000872")]
		public override string Name
		{
			[Token(Token = "0x6001CF8")]
			[Address(RVA = "0x310AB10", Offset = "0x3109110", VA = "0x18310AB10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000873")]
		public override string ussName
		{
			[Token(Token = "0x6001CF9")]
			[Address(RVA = "0x310AB40", Offset = "0x3109140", VA = "0x18310AB40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000874")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001CFA")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001CFB")]
		[Address(RVA = "0x310AA00", Offset = "0x3109000", VA = "0x18310AA00", Slot = "14")]
		public override MaterialDefinition GetValue(ref ResolvedStyleAccess container)
		{
			return default(MaterialDefinition);
		}

		[Token(Token = "0x6001CFC")]
		[Address(RVA = "0x310AAD0", Offset = "0x31090D0", VA = "0x18310AAD0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, MaterialDefinition value)
		{
		}

		[Token(Token = "0x6001CFD")]
		[Address(RVA = "0x30F27D0", Offset = "0x30F0DD0", VA = "0x1830F27D0")]
		public UnityMaterialProperty()
		{
		}
	}

	[Token(Token = "0x20003CC")]
	private class UnityParagraphSpacingProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000875")]
		public override string Name
		{
			[Token(Token = "0x6001CFE")]
			[Address(RVA = "0x310AC00", Offset = "0x3109200", VA = "0x18310AC00", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000876")]
		public override string ussName
		{
			[Token(Token = "0x6001CFF")]
			[Address(RVA = "0x310AC30", Offset = "0x3109230", VA = "0x18310AC30", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000877")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D00")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D01")]
		[Address(RVA = "0x310AB70", Offset = "0x3109170", VA = "0x18310AB70", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001D02")]
		[Address(RVA = "0x310ABC0", Offset = "0x31091C0", VA = "0x18310ABC0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001D03")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public UnityParagraphSpacingProperty()
		{
		}
	}

	[Token(Token = "0x20003CD")]
	private class UnitySliceBottomProperty : ResolvedIntProperty
	{
		[Token(Token = "0x17000878")]
		public override string Name
		{
			[Token(Token = "0x6001D04")]
			[Address(RVA = "0x310ACF0", Offset = "0x31092F0", VA = "0x18310ACF0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000879")]
		public override string ussName
		{
			[Token(Token = "0x6001D05")]
			[Address(RVA = "0x310AD20", Offset = "0x3109320", VA = "0x18310AD20", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700087A")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D06")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D07")]
		[Address(RVA = "0x310AC60", Offset = "0x3109260", VA = "0x18310AC60", Slot = "14")]
		public override int GetValue(ref ResolvedStyleAccess container)
		{
			return default(int);
		}

		[Token(Token = "0x6001D08")]
		[Address(RVA = "0x310ACB0", Offset = "0x31092B0", VA = "0x18310ACB0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, int value)
		{
		}

		[Token(Token = "0x6001D09")]
		[Address(RVA = "0x30F2790", Offset = "0x30F0D90", VA = "0x1830F2790")]
		public UnitySliceBottomProperty()
		{
		}
	}

	[Token(Token = "0x20003CE")]
	private class UnitySliceLeftProperty : ResolvedIntProperty
	{
		[Token(Token = "0x1700087B")]
		public override string Name
		{
			[Token(Token = "0x6001D0A")]
			[Address(RVA = "0x310ADE0", Offset = "0x31093E0", VA = "0x18310ADE0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700087C")]
		public override string ussName
		{
			[Token(Token = "0x6001D0B")]
			[Address(RVA = "0x310AE10", Offset = "0x3109410", VA = "0x18310AE10", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700087D")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D0C")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D0D")]
		[Address(RVA = "0x310AD50", Offset = "0x3109350", VA = "0x18310AD50", Slot = "14")]
		public override int GetValue(ref ResolvedStyleAccess container)
		{
			return default(int);
		}

		[Token(Token = "0x6001D0E")]
		[Address(RVA = "0x310ADA0", Offset = "0x31093A0", VA = "0x18310ADA0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, int value)
		{
		}

		[Token(Token = "0x6001D0F")]
		[Address(RVA = "0x30F2790", Offset = "0x30F0D90", VA = "0x1830F2790")]
		public UnitySliceLeftProperty()
		{
		}
	}

	[Token(Token = "0x20003CF")]
	private class UnitySliceRightProperty : ResolvedIntProperty
	{
		[Token(Token = "0x1700087E")]
		public override string Name
		{
			[Token(Token = "0x6001D10")]
			[Address(RVA = "0x310AED0", Offset = "0x31094D0", VA = "0x18310AED0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700087F")]
		public override string ussName
		{
			[Token(Token = "0x6001D11")]
			[Address(RVA = "0x310AF00", Offset = "0x3109500", VA = "0x18310AF00", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000880")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D12")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D13")]
		[Address(RVA = "0x310AE40", Offset = "0x3109440", VA = "0x18310AE40", Slot = "14")]
		public override int GetValue(ref ResolvedStyleAccess container)
		{
			return default(int);
		}

		[Token(Token = "0x6001D14")]
		[Address(RVA = "0x310AE90", Offset = "0x3109490", VA = "0x18310AE90", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, int value)
		{
		}

		[Token(Token = "0x6001D15")]
		[Address(RVA = "0x30F2790", Offset = "0x30F0D90", VA = "0x1830F2790")]
		public UnitySliceRightProperty()
		{
		}
	}

	[Token(Token = "0x20003D0")]
	private class UnitySliceScaleProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000881")]
		public override string Name
		{
			[Token(Token = "0x6001D16")]
			[Address(RVA = "0x310AFC0", Offset = "0x31095C0", VA = "0x18310AFC0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000882")]
		public override string ussName
		{
			[Token(Token = "0x6001D17")]
			[Address(RVA = "0x310AFF0", Offset = "0x31095F0", VA = "0x18310AFF0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000883")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D18")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D19")]
		[Address(RVA = "0x310AF30", Offset = "0x3109530", VA = "0x18310AF30", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001D1A")]
		[Address(RVA = "0x310AF80", Offset = "0x3109580", VA = "0x18310AF80", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001D1B")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public UnitySliceScaleProperty()
		{
		}
	}

	[Token(Token = "0x20003D1")]
	private class UnitySliceTopProperty : ResolvedIntProperty
	{
		[Token(Token = "0x17000884")]
		public override string Name
		{
			[Token(Token = "0x6001D1C")]
			[Address(RVA = "0x310B0B0", Offset = "0x31096B0", VA = "0x18310B0B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000885")]
		public override string ussName
		{
			[Token(Token = "0x6001D1D")]
			[Address(RVA = "0x310B0E0", Offset = "0x31096E0", VA = "0x18310B0E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000886")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D1E")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D1F")]
		[Address(RVA = "0x310B020", Offset = "0x3109620", VA = "0x18310B020", Slot = "14")]
		public override int GetValue(ref ResolvedStyleAccess container)
		{
			return default(int);
		}

		[Token(Token = "0x6001D20")]
		[Address(RVA = "0x310B070", Offset = "0x3109670", VA = "0x18310B070", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, int value)
		{
		}

		[Token(Token = "0x6001D21")]
		[Address(RVA = "0x30F2790", Offset = "0x30F0D90", VA = "0x1830F2790")]
		public UnitySliceTopProperty()
		{
		}
	}

	[Token(Token = "0x20003D2")]
	private class UnitySliceTypeProperty : ResolvedEnumProperty<SliceType>
	{
		[Token(Token = "0x17000887")]
		public override string Name
		{
			[Token(Token = "0x6001D22")]
			[Address(RVA = "0x310B1E0", Offset = "0x31097E0", VA = "0x18310B1E0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000888")]
		public override string ussName
		{
			[Token(Token = "0x6001D23")]
			[Address(RVA = "0x310B210", Offset = "0x3109810", VA = "0x18310B210", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000889")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D24")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D25")]
		[Address(RVA = "0x310B110", Offset = "0x3109710", VA = "0x18310B110", Slot = "14")]
		public override SliceType GetValue(ref ResolvedStyleAccess container)
		{
			return default(SliceType);
		}

		[Token(Token = "0x6001D26")]
		[Address(RVA = "0x310B160", Offset = "0x3109760", VA = "0x18310B160", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, SliceType value)
		{
		}

		[Token(Token = "0x6001D27")]
		[Address(RVA = "0x310B1A0", Offset = "0x31097A0", VA = "0x18310B1A0")]
		public UnitySliceTypeProperty()
		{
		}
	}

	[Token(Token = "0x20003D3")]
	private class UnityTextAlignProperty : ResolvedEnumProperty<TextAnchor>
	{
		[Token(Token = "0x1700088A")]
		public override string Name
		{
			[Token(Token = "0x6001D28")]
			[Address(RVA = "0x310B310", Offset = "0x3109910", VA = "0x18310B310", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700088B")]
		public override string ussName
		{
			[Token(Token = "0x6001D29")]
			[Address(RVA = "0x310B340", Offset = "0x3109940", VA = "0x18310B340", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700088C")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D2A")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D2B")]
		[Address(RVA = "0x310B240", Offset = "0x3109840", VA = "0x18310B240", Slot = "14")]
		public override TextAnchor GetValue(ref ResolvedStyleAccess container)
		{
			return default(TextAnchor);
		}

		[Token(Token = "0x6001D2C")]
		[Address(RVA = "0x310B290", Offset = "0x3109890", VA = "0x18310B290", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, TextAnchor value)
		{
		}

		[Token(Token = "0x6001D2D")]
		[Address(RVA = "0x310B2D0", Offset = "0x31098D0", VA = "0x18310B2D0")]
		public UnityTextAlignProperty()
		{
		}
	}

	[Token(Token = "0x20003D4")]
	private class UnityTextGeneratorProperty : ResolvedEnumProperty<TextGeneratorType>
	{
		[Token(Token = "0x1700088D")]
		public override string Name
		{
			[Token(Token = "0x6001D2E")]
			[Address(RVA = "0x310B440", Offset = "0x3109A40", VA = "0x18310B440", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700088E")]
		public override string ussName
		{
			[Token(Token = "0x6001D2F")]
			[Address(RVA = "0x310B470", Offset = "0x3109A70", VA = "0x18310B470", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700088F")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D30")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D31")]
		[Address(RVA = "0x310B370", Offset = "0x3109970", VA = "0x18310B370", Slot = "14")]
		public override TextGeneratorType GetValue(ref ResolvedStyleAccess container)
		{
			return default(TextGeneratorType);
		}

		[Token(Token = "0x6001D32")]
		[Address(RVA = "0x310B3C0", Offset = "0x31099C0", VA = "0x18310B3C0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, TextGeneratorType value)
		{
		}

		[Token(Token = "0x6001D33")]
		[Address(RVA = "0x310B400", Offset = "0x3109A00", VA = "0x18310B400")]
		public UnityTextGeneratorProperty()
		{
		}
	}

	[Token(Token = "0x20003D5")]
	private class UnityTextOutlineColorProperty : ResolvedColorProperty
	{
		[Token(Token = "0x17000890")]
		public override string Name
		{
			[Token(Token = "0x6001D34")]
			[Address(RVA = "0x310B5B0", Offset = "0x3109BB0", VA = "0x18310B5B0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000891")]
		public override string ussName
		{
			[Token(Token = "0x6001D35")]
			[Address(RVA = "0x310B5E0", Offset = "0x3109BE0", VA = "0x18310B5E0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000892")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D36")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D37")]
		[Address(RVA = "0x310B4A0", Offset = "0x3109AA0", VA = "0x18310B4A0", Slot = "14")]
		public override Color GetValue(ref ResolvedStyleAccess container)
		{
			return default(Color);
		}

		[Token(Token = "0x6001D38")]
		[Address(RVA = "0x310B570", Offset = "0x3109B70", VA = "0x18310B570", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Color value)
		{
		}

		[Token(Token = "0x6001D39")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		public UnityTextOutlineColorProperty()
		{
		}
	}

	[Token(Token = "0x20003D6")]
	private class UnityTextOutlineWidthProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x17000893")]
		public override string Name
		{
			[Token(Token = "0x6001D3A")]
			[Address(RVA = "0x310B6A0", Offset = "0x3109CA0", VA = "0x18310B6A0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000894")]
		public override string ussName
		{
			[Token(Token = "0x6001D3B")]
			[Address(RVA = "0x310B6D0", Offset = "0x3109CD0", VA = "0x18310B6D0", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000895")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D3C")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D3D")]
		[Address(RVA = "0x310B610", Offset = "0x3109C10", VA = "0x18310B610", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001D3E")]
		[Address(RVA = "0x310B660", Offset = "0x3109C60", VA = "0x18310B660", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001D3F")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public UnityTextOutlineWidthProperty()
		{
		}
	}

	[Token(Token = "0x20003D7")]
	private class UnityTextOverflowPositionProperty : ResolvedEnumProperty<TextOverflowPosition>
	{
		[Token(Token = "0x17000896")]
		public override string Name
		{
			[Token(Token = "0x6001D40")]
			[Address(RVA = "0x310B7D0", Offset = "0x3109DD0", VA = "0x18310B7D0", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000897")]
		public override string ussName
		{
			[Token(Token = "0x6001D41")]
			[Address(RVA = "0x310B800", Offset = "0x3109E00", VA = "0x18310B800", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000898")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D42")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D43")]
		[Address(RVA = "0x310B700", Offset = "0x3109D00", VA = "0x18310B700", Slot = "14")]
		public override TextOverflowPosition GetValue(ref ResolvedStyleAccess container)
		{
			return default(TextOverflowPosition);
		}

		[Token(Token = "0x6001D44")]
		[Address(RVA = "0x310B750", Offset = "0x3109D50", VA = "0x18310B750", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, TextOverflowPosition value)
		{
		}

		[Token(Token = "0x6001D45")]
		[Address(RVA = "0x310B790", Offset = "0x3109D90", VA = "0x18310B790")]
		public UnityTextOverflowPositionProperty()
		{
		}
	}

	[Token(Token = "0x20003D8")]
	private class VisibilityProperty : ResolvedEnumProperty<Visibility>
	{
		[Token(Token = "0x17000899")]
		public override string Name
		{
			[Token(Token = "0x6001D46")]
			[Address(RVA = "0x310C530", Offset = "0x310AB30", VA = "0x18310C530", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700089A")]
		public override string ussName
		{
			[Token(Token = "0x6001D47")]
			[Address(RVA = "0x310C560", Offset = "0x310AB60", VA = "0x18310C560", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700089B")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D48")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D49")]
		[Address(RVA = "0x310C460", Offset = "0x310AA60", VA = "0x18310C460", Slot = "14")]
		public override Visibility GetValue(ref ResolvedStyleAccess container)
		{
			return default(Visibility);
		}

		[Token(Token = "0x6001D4A")]
		[Address(RVA = "0x310C4B0", Offset = "0x310AAB0", VA = "0x18310C4B0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, Visibility value)
		{
		}

		[Token(Token = "0x6001D4B")]
		[Address(RVA = "0x310C4F0", Offset = "0x310AAF0", VA = "0x18310C4F0")]
		public VisibilityProperty()
		{
		}
	}

	[Token(Token = "0x20003D9")]
	private class WhiteSpaceProperty : ResolvedEnumProperty<WhiteSpace>
	{
		[Token(Token = "0x1700089C")]
		public override string Name
		{
			[Token(Token = "0x6001D4C")]
			[Address(RVA = "0x310DA30", Offset = "0x310C030", VA = "0x18310DA30", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700089D")]
		public override string ussName
		{
			[Token(Token = "0x6001D4D")]
			[Address(RVA = "0x310DA60", Offset = "0x310C060", VA = "0x18310DA60", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700089E")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D4E")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D4F")]
		[Address(RVA = "0x310D960", Offset = "0x310BF60", VA = "0x18310D960", Slot = "14")]
		public override WhiteSpace GetValue(ref ResolvedStyleAccess container)
		{
			return default(WhiteSpace);
		}

		[Token(Token = "0x6001D50")]
		[Address(RVA = "0x310D9B0", Offset = "0x310BFB0", VA = "0x18310D9B0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, WhiteSpace value)
		{
		}

		[Token(Token = "0x6001D51")]
		[Address(RVA = "0x310D9F0", Offset = "0x310BFF0", VA = "0x18310D9F0")]
		public WhiteSpaceProperty()
		{
		}
	}

	[Token(Token = "0x20003DA")]
	private class WidthProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x1700089F")]
		public override string Name
		{
			[Token(Token = "0x6001D52")]
			[Address(RVA = "0x310DB20", Offset = "0x310C120", VA = "0x18310DB20", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008A0")]
		public override string ussName
		{
			[Token(Token = "0x6001D53")]
			[Address(RVA = "0x310DB50", Offset = "0x310C150", VA = "0x18310DB50", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008A1")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D54")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D55")]
		[Address(RVA = "0x310DA90", Offset = "0x310C090", VA = "0x18310DA90", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001D56")]
		[Address(RVA = "0x310DAE0", Offset = "0x310C0E0", VA = "0x18310DAE0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001D57")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public WidthProperty()
		{
		}
	}

	[Token(Token = "0x20003DB")]
	private class WordSpacingProperty : ResolvedFloatProperty
	{
		[Token(Token = "0x170008A2")]
		public override string Name
		{
			[Token(Token = "0x6001D58")]
			[Address(RVA = "0x310DC10", Offset = "0x310C210", VA = "0x18310DC10", Slot = "12")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008A3")]
		public override string ussName
		{
			[Token(Token = "0x6001D59")]
			[Address(RVA = "0x310DC40", Offset = "0x310C240", VA = "0x18310DC40", Slot = "19")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170008A4")]
		public override bool IsReadOnly
		{
			[Token(Token = "0x6001D5A")]
			[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001D5B")]
		[Address(RVA = "0x310DB80", Offset = "0x310C180", VA = "0x18310DB80", Slot = "14")]
		public override float GetValue(ref ResolvedStyleAccess container)
		{
			return default(float);
		}

		[Token(Token = "0x6001D5C")]
		[Address(RVA = "0x310DBD0", Offset = "0x310C1D0", VA = "0x18310DBD0", Slot = "15")]
		public override void SetValue(ref ResolvedStyleAccess container, float value)
		{
		}

		[Token(Token = "0x6001D5D")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		public WordSpacingProperty()
		{
		}
	}

	[Token(Token = "0x20003DC")]
	internal interface IStyleProperty : IProperty<ResolvedStyleAccess>, IProperty, IPropertyAccept<ResolvedStyleAccess>
	{
		[Token(Token = "0x170008A5")]
		string ussName
		{
			[Token(Token = "0x6001D5E")]
			get;
		}
	}

	[Token(Token = "0x20003DD")]
	private abstract class ResolvedStyleProperty<TValue> : Property<ResolvedStyleAccess, TValue>, IStyleProperty, IProperty<ResolvedStyleAccess>, IProperty, IPropertyAccept<ResolvedStyleAccess>
	{
		[Token(Token = "0x170008A6")]
		public abstract string ussName
		{
			[Token(Token = "0x6001D5F")]
			get;
		}

		[Token(Token = "0x6001D60")]
		protected ResolvedStyleProperty()
		{
		}
	}

	[Token(Token = "0x20003DE")]
	private abstract class ResolvedEnumProperty<TValue> : ResolvedStyleProperty<TValue> where TValue : struct, IConvertible
	{
		[Token(Token = "0x6001D61")]
		protected ResolvedEnumProperty()
		{
		}
	}

	[Token(Token = "0x20003DF")]
	private abstract class ResolvedColorProperty : ResolvedStyleProperty<Color>
	{
		[Token(Token = "0x6001D62")]
		[Address(RVA = "0x30E95B0", Offset = "0x30E7BB0", VA = "0x1830E95B0")]
		protected ResolvedColorProperty()
		{
		}
	}

	[Token(Token = "0x20003E0")]
	private abstract class ResolvedBackgroundProperty : ResolvedStyleProperty<Background>
	{
		[Token(Token = "0x6001D63")]
		[Address(RVA = "0x30E9770", Offset = "0x30E7D70", VA = "0x1830E9770")]
		protected ResolvedBackgroundProperty()
		{
		}
	}

	[Token(Token = "0x20003E1")]
	private abstract class ResolvedFloatProperty : ResolvedStyleProperty<float>
	{
		[Token(Token = "0x6001D64")]
		[Address(RVA = "0x30EAA90", Offset = "0x30E9090", VA = "0x1830EAA90")]
		protected ResolvedFloatProperty()
		{
		}
	}

	[Token(Token = "0x20003E2")]
	private abstract class ResolvedStyleFloatProperty : ResolvedStyleProperty<StyleFloat>
	{
		[Token(Token = "0x6001D65")]
		[Address(RVA = "0x30EC480", Offset = "0x30EAA80", VA = "0x1830EC480")]
		protected ResolvedStyleFloatProperty()
		{
		}
	}

	[Token(Token = "0x20003E3")]
	private abstract class ResolvedListProperty<T> : ResolvedStyleProperty<IEnumerable<T>>
	{
		[Token(Token = "0x6001D66")]
		protected ResolvedListProperty()
		{
		}
	}

	[Token(Token = "0x20003E4")]
	private abstract class ResolvedFontProperty : ResolvedStyleProperty<Font>
	{
		[Token(Token = "0x6001D67")]
		[Address(RVA = "0x30F2750", Offset = "0x30F0D50", VA = "0x1830F2750")]
		protected ResolvedFontProperty()
		{
		}
	}

	[Token(Token = "0x20003E5")]
	private abstract class ResolvedFontDefinitionProperty : ResolvedStyleProperty<FontDefinition>
	{
		[Token(Token = "0x6001D68")]
		[Address(RVA = "0x30F2710", Offset = "0x30F0D10", VA = "0x1830F2710")]
		protected ResolvedFontDefinitionProperty()
		{
		}
	}

	[Token(Token = "0x20003E6")]
	private abstract class ResolvedIntProperty : ResolvedStyleProperty<int>
	{
		[Token(Token = "0x6001D69")]
		[Address(RVA = "0x30F2790", Offset = "0x30F0D90", VA = "0x1830F2790")]
		protected ResolvedIntProperty()
		{
		}
	}

	[Token(Token = "0x20003E7")]
	private abstract class ResolvedRotateProperty : ResolvedStyleProperty<Rotate>
	{
		[Token(Token = "0x6001D6A")]
		[Address(RVA = "0x30F2810", Offset = "0x30F0E10", VA = "0x1830F2810")]
		protected ResolvedRotateProperty()
		{
		}
	}

	[Token(Token = "0x20003E8")]
	private abstract class ResolvedScaleProperty : ResolvedStyleProperty<Scale>
	{
		[Token(Token = "0x6001D6B")]
		[Address(RVA = "0x30F2850", Offset = "0x30F0E50", VA = "0x1830F2850")]
		protected ResolvedScaleProperty()
		{
		}
	}

	[Token(Token = "0x20003E9")]
	private abstract class ResolvedVector3Property : ResolvedStyleProperty<Vector3>
	{
		[Token(Token = "0x6001D6C")]
		[Address(RVA = "0x30F5D80", Offset = "0x30F4380", VA = "0x1830F5D80")]
		protected ResolvedVector3Property()
		{
		}
	}

	[Token(Token = "0x20003EA")]
	private abstract class ResolvedBackgroundPositionProperty : ResolvedStyleProperty<BackgroundPosition>
	{
		[Token(Token = "0x6001D6D")]
		[Address(RVA = "0x30E9930", Offset = "0x30E7F30", VA = "0x1830E9930")]
		protected ResolvedBackgroundPositionProperty()
		{
		}
	}

	[Token(Token = "0x20003EB")]
	private abstract class ResolvedBackgroundRepeatProperty : ResolvedStyleProperty<BackgroundRepeat>
	{
		[Token(Token = "0x6001D6E")]
		[Address(RVA = "0x30E9C50", Offset = "0x30E8250", VA = "0x1830E9C50")]
		protected ResolvedBackgroundRepeatProperty()
		{
		}
	}

	[Token(Token = "0x20003EC")]
	private abstract class ResolvedBackgroundSizeProperty : ResolvedStyleProperty<BackgroundSize>
	{
		[Token(Token = "0x6001D6F")]
		[Address(RVA = "0x30E9E10", Offset = "0x30E8410", VA = "0x1830E9E10")]
		protected ResolvedBackgroundSizeProperty()
		{
		}
	}

	[Token(Token = "0x20003ED")]
	private abstract class ResolvedMaterialDefinitionProperty : ResolvedStyleProperty<MaterialDefinition>
	{
		[Token(Token = "0x6001D70")]
		[Address(RVA = "0x30F27D0", Offset = "0x30F0DD0", VA = "0x1830F27D0")]
		protected ResolvedMaterialDefinitionProperty()
		{
		}
	}

	[Token(Token = "0x20003EE")]
	private abstract class ResolvedRatioProperty : ResolvedStyleProperty<Ratio>
	{
		[Token(Token = "0x6001D71")]
		[Address(RVA = "0x30E9400", Offset = "0x30E7A00", VA = "0x1830E9400")]
		protected ResolvedRatioProperty()
		{
		}
	}

	[Token(Token = "0x4000C71")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<IProperty<ResolvedStyleAccess>> m_PropertiesList;

	[Token(Token = "0x4000C72")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, IProperty<ResolvedStyleAccess>> m_PropertiesHash;

	[Token(Token = "0x6001B67")]
	[Address(RVA = "0x30F2CC0", Offset = "0x30F12C0", VA = "0x1830F2CC0")]
	public ResolvedStyleAccessPropertyBag()
	{
	}

	[Token(Token = "0x6001B68")]
	[Address(RVA = "0x30F2890", Offset = "0x30F0E90", VA = "0x1830F2890")]
	private void AddPropertyRange(params IStyleProperty[] properties)
	{
	}

	[Token(Token = "0x6001B69")]
	[Address(RVA = "0x30F2BF0", Offset = "0x30F11F0", VA = "0x1830F2BF0", Slot = "12")]
	public override PropertyCollection<ResolvedStyleAccess> GetProperties()
	{
		return default(PropertyCollection<ResolvedStyleAccess>);
	}

	[Token(Token = "0x6001B6A")]
	[Address(RVA = "0x30F2B90", Offset = "0x30F1190", VA = "0x1830F2B90", Slot = "13")]
	public override PropertyCollection<ResolvedStyleAccess> GetProperties(ref ResolvedStyleAccess container)
	{
		return default(PropertyCollection<ResolvedStyleAccess>);
	}

	[Token(Token = "0x6001B6B")]
	[Address(RVA = "0x30F2C50", Offset = "0x30F1250", VA = "0x1830F2C50", Slot = "16")]
	public bool TryGetProperty(ref ResolvedStyleAccess container, string name, out IProperty<ResolvedStyleAccess> property)
	{
		return default(bool);
	}
}
